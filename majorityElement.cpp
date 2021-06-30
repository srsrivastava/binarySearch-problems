// Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

#include <iostream>
using namespace std;

int majority(int arr[], int n) {
    int res = 0, count = 1;

    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[res])
            count ++ ;
        else 
            count--;
        if(count == 0){
            res = i;
            count = 1;
        }
    }

    count = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == arr[res] )
            count++;
    }

    if(count <= n/2)
        return -1;
    return arr[res];
}

int main() {

    int arr[] = {1,4, 5, 3, 5, 5, 6, 5, 5}, n = 9;

    int majorityElement = majority(arr, n);
    cout << majorityElement;


}
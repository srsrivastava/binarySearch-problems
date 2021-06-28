// Given a sorted array and a sum find if there is a sum with given pair
// Problem on two pointers approach

#include <iostream>
using namespace std;

bool isPair(int arr[], int n, int sum) {
    int left = 0, right = n-1;

    while(left < right ) {
        if(arr[left] + arr[right]  == sum)
            return true;
        else if(arr[left] + arr[right] > sum)
            right--;
        else 
            left++;
    }
    return false;
}

int main() {
    int arr[] = {2, 3, 7, 8, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 36;
    
    cout << isPair(arr, n, sum);
}
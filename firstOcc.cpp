// Program to find first occurence of an element in sorted array

#include <iostream>
using namespace std;

int firstOccurence(int arr[], int low, int high, int x) {
    while(low <= high) {
        // finding mid index
        int mid = (low+high)/2;

        //  if element at mid is greater, go to the left half

        if(arr[mid] > x)
            high = mid - 1;
        
        // if element at mid is smaller, go to the right half 

        else if(arr[mid] < x)
            low = mid+1;
        // if element to be found is present at mid
        else {
            // element present at index 0, or first occurence of element
            if(mid == 0 || arr[mid] != arr[mid-1])
                return mid;
            else
                high = mid - 1;
        }

        
    }

    return -1;
}

int main() {
    int arr[] = {10, 20, 20, 30, 30, 40, 50, 60, 60, 60};
    int size = sizeof(arr)/sizeof(arr[0]);
    int low = 0,  high = size-1;

    int idx = firstOccurence(arr, low, high, 60);

    cout << idx;
}
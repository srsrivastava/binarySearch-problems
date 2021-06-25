// Program to find the occurences of a given element in sorted array

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

int lastOccurence(int arr[], int low, int high, int x) {
    int n = high;
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
            // element present at last index, or last occurence of element
            if(mid == n || arr[mid] != arr[mid+1])
                return mid;
            else
                low = mid + 1;
        }

        
    }

    return -1;
}

int countOccurences(int arr[],int low, int high, int x) {

    // find first occurence of element
    
    int first = firstOccurence(arr, low, high, x);

    // if element is not present
    if(first == -1)
        return -1;
    
    // if element is present return count
    else 
        return (lastOccurence(arr, low, high, x) - first + 1);
}

int main() {
    int arr[] = {10, 20, 20, 30, 30, 40, 50, 60, 60, 60};
    int size = sizeof(arr)/sizeof(arr[0]);
    int low = 0,  high = size-1;

    int count = countOccurences(arr, low, high, 0);

    cout << count;
}
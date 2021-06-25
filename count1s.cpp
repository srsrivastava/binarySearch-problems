// Program to find counts of 1 in a binary sorted array

#include <iostream> 
using namespace std;

int countOnes(int arr[], int n) {
    int low = 0, high = n-1;
    // Find the first occurence of 1;
    while(low <= high) {
        int mid = (low + high)/2;

        if(arr[mid] < 1)
            low = mid + 1;
        else {
            // returning count of 1s.
            if(mid == 0 || arr[mid] != arr[mid-1])
                return (n - mid);
            else 
                high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int count = countOnes(arr, size);

    cout << count;
}
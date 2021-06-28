// Find the element in an infite sized array

#include <iostream>
using namespace std;

int bSearch(int arr[], int low, int high, int x) {
    if(low > high)
        return -1;

    int mid = (low+high)/2;

    if(arr[mid] == x)
        return mid;

    else if (arr[mid] < x)
        return bSearch(arr, mid+1, high, x);
    else 
        return bSearch(arr, low, mid-1, x);
}

int unboundedSearch(int arr[], int x) {
    if(arr[0] == x)
        return 0;
    int i = 1;
    while (arr[i] < x)
        i++;
    if(arr[i] == x)
    return i;

    return bSearch(arr, i/2+1, i-1, x);
}

int main() {
    int arr[] = {12, 34, 56, 67, 89, 102};
    
    

    int idx = unboundedSearch(arr, 67);

    cout << idx;
}
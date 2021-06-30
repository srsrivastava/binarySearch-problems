// Find the repeating element in the unsorted array
#include<iostream>
using namespace std;

int findRepeat(int arr[], int n) {
    int slow = arr[0] + 1, fast = arr[0] + 1;
    do{
        slow = arr[slow] + 1;
        fast = arr[arr[fast]+ 1] + 1;

    }while(slow != fast);

    slow = arr[0] + 1;

    while(slow != fast){
        slow = arr[slow] + 1;
        fast = arr[fast] + 1;
    }

    return slow - 1;

}

int main() {
    

 int arr[] = {1, 3, 2, 4, 6, 5, 0, 4}, n= 8;

 cout << findRepeat(arr, n);

	return 0;
}
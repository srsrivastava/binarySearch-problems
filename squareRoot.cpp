// Program to find the floor value of square root of an integer

#include <iostream>
using namespace std;

int squareRoot(int x) {
    int low = 1, high = x, ans = -1;

    while(low <= high) {
        int mid = (low + high)/2;
        int temp = mid * mid;

        if(temp == x)
            return mid;
        else if(temp > x) 
            high = mid -1;
        else {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int main () {
    int x;

    cout << "Enter the number to find its square root:";
    cin >> x;

    int ans = squareRoot(x);
    cout << "Square root of " << x << " in its floor value is " << ans;

    return 0;

}
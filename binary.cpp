#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int left = 0, right = n - 1, mid;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            cout << "Element found at index " << mid << endl;
            return 0;
        }
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    cout << "Element not found" << endl;
    return 0;
}
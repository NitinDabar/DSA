#include <iostream>
using namespace std;

int peak(int arr[], int n) {
    int s = 0, e = n - 1, mid;

    while (s < e) {
        mid = s + (e - s) / 2; // to prevent overflow

        // If mid is the peak element
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) {
            return mid;
        }
        // If the left neighbor is greater, move to the left half
        else if (arr[mid] < arr[mid - 1]) {
            e = mid - 1;
        }
        // If the right neighbor is greater, move to the right half
        else {
            s = mid + 1;
        }
    }

    // When s == e, we have found the peak at index s (or e, since s == e)
    return s;
}

int main() {
    int arr[8] = {0, 2, 3, 6, 9, 10, 8, 5};
    cout << "Peak index is " << peak(arr, 8) << endl;
    return 0;
}

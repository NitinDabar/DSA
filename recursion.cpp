#include <iostream>
using namespace std;

// Factorial using recursion
int factorial(int n) {
    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case
    return n * factorial(n - 1);
}

// Fibonacci using recursion
int fibonacci(int n) {
    // Base cases
    if (n <= 1) {
        return n;
    }
    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Binary Search using recursion
int binarySearch(int arr[], int left, int right, int target) {
    // Base case
    if (left > right) {
        return -1;  // Element not found
    }
    
    int mid = left + (right - left) / 2;
    
    // Base case
    if (arr[mid] == target) {
        return mid;
    }
    
    // Recursive cases
    if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target);
    }
    return binarySearch(arr, mid + 1, right, target);
}

// Tower of Hanoi
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    // Base case
    if (n == 1) {
        cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
        return;
    }
    
    // Recursive cases
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    // Test factorial
    cout << "Factorial of 5: " << factorial(5) << endl;
    
    // Test fibonacci
    cout << "Fibonacci of 7: " << fibonacci(7) << endl;
    
    // Test binary search
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = binarySearch(arr, 0, n - 1, target);
    cout << "Binary Search: Element " << target << " is at index " << result << endl;
    
    // Test Tower of Hanoi
    cout << "\nTower of Hanoi with 3 disks:" << endl;
    towerOfHanoi(3, 'A', 'C', 'B');
    
    return 0;
}
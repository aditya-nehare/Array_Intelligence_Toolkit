/*
    Demonstration: Recursive Sum of Array

    This code demonstrates how recursion can be used to
    calculate the sum of an integer array.

    IMPORTANT:
    - This approach is EDUCATIONAL, not optimal.
    - Iterative solutions are preferred in real-world code
      due to lower stack usage and better performance.
    - This file is NOT used by the main CLI application.
*/

#include <iostream>
using namespace std;

// Recursive function to calculate sum of array
int recursiveSum(int arr[], int n) {
    // Base case: empty array
    if (n == 0)
        return 0;

    // Recursive case:
    // sum of first (n-1) elements + last element
    return recursiveSum(arr, n - 1) + arr[n - 1];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Recursive sum of array: "
         << recursiveSum(arr, n) << endl;

    return 0;
}

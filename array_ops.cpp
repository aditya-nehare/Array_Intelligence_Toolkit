#include <iostream>
#include <climits>
#include "array_ops.h"

using namespace std;

// NOTE:
// All array operations are implemented iteratively for
// O(1) auxiliary space unless explicitly stated otherwise.

void display(int arr[], int n) {//Time Complexity: O(n), Space Complexity: O(1)
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    // The function iterates once through all n elements to print them. No extra memory is used apart from loop variables.
}

int sum(int arr[], int n) {// Time Complexity: O(n), Space Complexity: O(1)
    int s = 0;
    for (int i = 0; i < n; i++)
        s += arr[i];
    return s;
    //Each element is visited exactly once to accumulate the sum. Uses a single integer variable for accumulation.
}

float average(int arr[], int n) {// Time Complexity: O(n), Space Complexity: O(1)
    return (float)sum(arr, n) / n;
    // Internally calls sum(), which iterates through the array once. No additional data structures are used.
}

int maximum(int arr[], int n) {// Time Complexity: O(n), Space Complexity: O(1)
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
    // Compares each element once to track the maximum value.
}

int minimum(int arr[], int n) {// Time Complexity: O(n), Space Complexity: O(1)
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
    // Similar to maximum; scans the array once to find the smallest value.
}

void countEvenOdd(int arr[], int n) {// Time Complexity: O(n), Space Complexity: O(1)
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }
    cout << "Even: " << even << "\nOdd: " << odd << endl;
    // Each element is checked once using a modulo operation.
}

void countPNZ(int arr[], int n) {// Time Complexity: O(n), Space Complexity: O(1)
    int p = 0, n1 = 0, z = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) p++;
        else if (arr[i] < 0) n1++;
        else z++;
    }
    cout << "Positive: " << p << "\nNegative: " << n1 << "\nZero: " << z << endl;
    //Single traversal of the array to classify elements as positive, negative, or zero.
}

void reverse(int arr[], int n) {// Time Complexity: O(n), Space Complexity: O(1)
    int i = 0, j = n - 1;
    while (i < j) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        i++; j--;
    }

    display(arr, n);
    // Swaps elements from both ends moving toward the center.
}

int secondLargest(int arr[], int n) {
    if (n < 2) return -1; // not enough elements

    int largest = INT_MIN;
    int second  = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }

    return (second == INT_MIN) ? -1 : second;
}

void leftRotateByOne(int arr[], int n) {// Time Complexity: O(n), Space Complexity: O(1)
    int first = arr[0];
    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n - 1] = first;

    display(arr, n);
    // All elements are shifted one position to the left.
}

void rightRotateByOne(int arr[], int n) {// Time Complexity: O(n), Space Complexity: O(1)
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = last;

    display(arr, n);
    // All elements are shifted one position to the right
}

int linearSearch(int arr[], int n, int key) {// Time Complexity: O(n), Space Complexity: O(1)
    for (int i = 0; i < n; i++){
        if (arr[i] == key)
            return i;
    }
    return -1;
    // In the worst case, the element is not present and all n elements are checked.
}

int binary_search(int arr[], int n, int key) {// Time Complexity: O(log n), Space Complexity: O(1)
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
    //The search space is halved in each iteration using indices.
}

void sub_array(int arr[], int n){
  for(int start = 0; start < n; start++){
    for(int end = start; end < n; end++){
      // cout << "(" << start << ", " << end << ")";
      for(int i=start; i<end; i++){
        cout << arr[i];
      }
      cout << ", ";
    }
  }
}

bool is_sorted(int arr[], int n) {// Time Complexity: O(n), Space Complexity: O(1)
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
    // Checks adjacent elements once to verify ascending order.
}

void bubble_sort(int *arr, int n){
  // Large element come to end by swapping with adjacent
  for(int i=0; i<n-1; i++){
    bool is_swap = false;

    for(int j=0; j<n-i-1; j++){
      if(arr[j] > arr[j+1]){
        swap(arr[j], arr[j+1]);
        is_swap = true;
      }
    }
    if(!is_swap)
      return;
  }
  display(arr, n);
}

void insertion_sort(int *arr, int n){
      for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    display(arr, n);
}

/*
    Checks if there exists a pair with given sum using two-pointer technique
    Assumes array is sorted in ascending order

    Time Complexity: O(n)
    Space Complexity: O(1)

    Why:
    - Two pointers traverse array from both ends
    - Each pointer moves at most n times
    - No extra data structures used
*/
bool hasPairWithSum(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int currentSum = arr[left] + arr[right];

        if (currentSum == target){
          cout << "( " << arr[left] <<", " << arr[right] << " ) ";
            return true;
        }
        else if (currentSum < target)
            left++;
        else
            right--;
    }
    return false;
}



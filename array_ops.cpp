#include <iostream>
#include "array_ops.h"

using namespace std;

void display(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int sum(int arr[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += arr[i];
    return s;
}

float average(int arr[], int n) {
    return (float)sum(arr, n) / n;
}

int maximum(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int minimum(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

void countEvenOdd(int arr[], int n) {
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }
    cout << "Even: " << even << "\nOdd: " << odd << endl;
}

void countPNZ(int arr[], int n) {
    int p = 0, n1 = 0, z = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) p++;
        else if (arr[i] < 0) n1++;
        else z++;
    }
    cout << "Positive: " << p << "\nNegative: " << n1 << "\nZero: " << z << endl;
}

void reverse(int arr[], int n) {
    int i = 0, j = n - 1;
    while (i < j) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        i++; j--;
    }

    display(arr, n);
}

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++){
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int secondLargest(int arr[], int n) {
    int largest = arr[0];
    int second = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] < largest && arr[i] > second) {
            second = arr[i];
        }
    }
    return second;
}

void leftRotateByOne(int arr[], int n) {
    int first = arr[0];
    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
    arr[n - 1] = first;

    display(arr, n);
}

void rightRotateByOne(int arr[], int n) {
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = last;

    display(arr, n);
}

void bubble_sort(int *arr, int n){
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

#ifndef ARRAY_OPS_H
#define ARRAY_OPS_H

void display(int arr[], int n);
int sum(int arr[], int n);
float average(int arr[], int n);
int maximum(int arr[], int n);
int minimum(int arr[], int n);
void countEvenOdd(int arr[], int n);
void countPNZ(int arr[], int n);
void reverse(int arr[], int n);

int secondLargest(int arr[], int n);
void leftRotateByOne(int arr[], int n);
void rightRotateByOne(int arr[], int n);

int linearSearch(int arr[], int n, int key);
void sub_array(int arr[], int n);
int binary_search(int arr[], int n, int key);

void bubble_sort(int arr[], int n);
void insertion_sort(int arr[], int n);

bool is_sorted(int arr[], int n);

bool hasPairWithSum(int arr[], int n, int target);

#endif

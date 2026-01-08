#include <iostream>
using namespace std;

void display(int arr[], int n){
  cout << "Array elements: ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int sum(int arr[], int n){
  int sum = 0;
  for(int i=0; i<n; i++){
    sum = sum + arr[i];
  }
  return sum;
}

float average(int arr[], int n){
  int sum = 0;
  for(int i=0; i<n; i++){
    sum = sum + arr[i];
  }
  return (float)sum/n;
}

int maximum(int * arr, int n){
  int max = arr[0];
  for(int i = 1; i < n; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}

int minimum(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
void countEvenOdd(int arr[], int n) {
    int even = 0, odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even count: " << even << endl;
    cout << "Odd count: " << odd << endl;
}

void countPNZ(int arr[], int n) {
    int pos = 0, neg = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
    cout << "Zero: " << zero << endl;
}

void reverse(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int linearSearch(int arr[], int n, int key){
  for(int i=0; i<n; i++){
    if(arr[i] == key)
      return i;
  }

  return -1;
}

int secondLargest(int arr[], int n){
  int largest = arr[0];
  int secondLargest = arr[0];

  for(int i=1; i<n; i++){
    if(arr[i] > largest){
      secondLargest = largest;
      largest = arr[i];
    }else if(arr[i] < largest && arr[i] > secondLargest){
      secondLargest = arr[i];
    }
  }

  return secondLargest;
}

void rightRotateByOne(int arr[], int n) {
    int last = arr[n - 1];

    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
}

void leftRotateByOne(int arr[], int n) {
    int first = arr[0];

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = first;
}

int main() {
  int n;
  cout << "Enter array size: ";
  cin >> n;

  int *arr = new int[n];
  cout << "Enter array elements: \n";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  int choice;

  do{
    cout << "\nMENU\n";
    cout << "1. Display array\n";
    cout << "2. Find sum\n";
    cout << "3. Find average\n";
    cout << "4. Find maximum\n";
    cout << "5. Find minimum\n";
    cout << "6. Count even and odd numbers\n";
    cout << "7. Count positive, negative and zero\n";
    cout << "8. Reverse array\n";
    cout << "9. Search an Element(linear search)\n";
    cout << "10. Find Second Largest element\n";
    cout << "11. Array left rotated by 1\n";
    cout << "12. Array right rotated by 1\n";
    cout << "13. Exit\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice){
      case 1:
      display(arr, n);
      break;
      case 2:
      cout << "Sum: " << sum(arr, n) << endl;
      break;
      case 3:
      cout << "Average: " << average(arr, n) << endl;
      break;
      case 4:
      cout << "Maximum: " << maximum(arr, n) << endl;
      break;
      case 5:
      cout << "Minimum: " << minimum(arr, n) << endl;
      break;
      case 6:
      countEvenOdd(arr, n);
      break;
      case 7:
      countPNZ(arr, n);
      break;
      case 8:
      reverse(arr, n);
      cout << "Array reversed.\n";
      break;
      case 9:{
      int key;
      cout << "Enter element to search: ";
      cin >> key;
      int index = linearSearch(arr, n, key);
      if (index == -1)
        cout << "Element not found\n";
      else
        cout << "Element found at index " << index << endl;
      break;
      }
      case 10:
      if (n < 2)
        cout << "Array size must be at least 2\n";
      else
        cout << "Second largest: " << secondLargest(arr, n) << endl;
      break;
      case 11:
      leftRotateByOne(arr, n);
      cout << "Array left rotated by 1\n";
      break;
      case 12:
      rightRotateByOne(arr, n);
      cout << "Array right rotated by 1\n";
      break;
    }
  }while(choice != 9);

    return 0;
}

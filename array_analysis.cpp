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
    cout << "9. Exit\n";
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

    }
  }while(choice != 9);

    return 0;
}

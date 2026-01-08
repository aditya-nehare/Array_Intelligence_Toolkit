#include <iostream>
using namespace std;

void display(int arr[], int n){
  cout << "Array elements: ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
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
    }
  }while(choice != 9);

    return 0;
}

#include <iostream>
#include "array_ops.h"
#include "file_ops.h"

using namespace std;

void showBanner() {
    char title[] = "ARRAY ANALYZER CLI - V3.1";
    cout << title << endl;
}

int main() {
    showBanner();

    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int choice;

    do {
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
        cout << "10. Search an element\n";
        cout << "11. Find second largest element\n";
        cout << "12. Left rotate array by 1\n";
        cout << "13. Right rotate array by 1\n";
        cout << "14. Bubble sort\n";
        cout << "15. Insertion sort\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
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
                cout << "Array reversed\n";
                break;

            case 10: {
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

            case 11:
                if (n < 2)
                    cout << "Array size must be at least 2\n";
                else
                    cout << "Second largest: " << secondLargest(arr, n) << endl;
                break;

            case 12:
                leftRotateByOne(arr, n);
                cout << "Array left rotated by 1\n";
                break;
            case 13:
                rightRotateByOne(arr, n);
                cout << "Array right rotated by 1\n";
                break;

            case 14:
                bubble_sort(arr ,n);
                cout << "array sorted using bubble sort algorithm:  \n";
                break;
            case 15:
                insertion_sort(arr ,n);
                cout << "array sorted using Insertion sort algorithm:  \n";
                break;
            case 9:
                cout << "Exiting program\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 9);

    return 0;
}

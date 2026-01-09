#include <fstream>
#include "file_ops.h"

using namespace std;

void saveArrayToFile(int arr[], int n, const char filename[]) {
    ofstream file(filename);
    for (int i = 0; i < n; i++)
        file << arr[i] << " ";
    file.close();
}

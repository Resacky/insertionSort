#include <iostream>

using namespace std;

void printArray(int *a, int arraySize);
void insertionSort(int *a, int arraySize);

int main() {
    int a[] = {64, 25, 12, 22, 11};
    int arraySize = sizeof(a) / sizeof(a[0]);

    printArray(a, arraySize);
    insertionSort(a, arraySize);
    printArray(a, arraySize);
    return 0;
}

void insertionSort(int *a, int arraySize) {
    int j, key;
    for (int i = 0; i < arraySize - 1; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

void printArray(int *a, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        cout << a[i] << endl;
    }
    cout << endl;
}
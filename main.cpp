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
    int current;
    for (int i = 0; i < arraySize; i++) {
        current = a[i];
        // previous index of the array, to signify the sorted side of the array and the unsorted side.
        int j = i - 1;

        // the j >= 0 condition is to check if i is within the first element of the array,
        // and the a[j] > current condition is to check if the element previous to i is greater than a[i]
        // if it is then it will shift all elements before i to the right
        while (j >= 0 && a[j] > current) {
            // This is to shift all the elements greater than a[j] to the right within the sorted side of the array.
            a[j + 1] = a[j];
            j--;
            // this should repeat until an element within the sorted array is less than the current element of i to then
            // insert it within the array, since a[i], got hypothetically overwritten with a[j]
        }
        a[j + 1] = current;
    }
}

void printArray(int *a, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        cout << a[i] << endl;
    }
    cout << endl;
}
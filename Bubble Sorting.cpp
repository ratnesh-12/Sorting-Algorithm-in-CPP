#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int numbers[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    bubbleSort(numbers, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << numbers[i] << " ";
    cout << endl;

    return 0;
}

OUTPUT:
Sorted array: 11 12 22 25 34 64 90 

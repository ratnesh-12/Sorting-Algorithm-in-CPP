#include <iostream>
using namespace std;

int main() {
    int numbers[] = {64, 25, 12, 22, 11};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (numbers[j] < numbers[minIndex])
                minIndex = j;
        }
        swap(numbers[i], numbers[minIndex]);
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << numbers[i] << " ";
    cout << endl;

    return 0;
}

OUTPUT:
Sorted array: 11 12 22 25 64  

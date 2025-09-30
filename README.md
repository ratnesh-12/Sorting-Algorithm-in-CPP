# Sorting-Algorithm-in-CPP

* Aim: To study and implement sorting algorithms in C++ for arranging data in a specific order.

* Tools Used: IDE, C++ compiler, arrays, loops, functions for sorting (Bubble Sort, Selection Sort, Quick Sort).

* Theory:

-In C++, sorting is the process of arranging elements of a data structure (like an array) in a specific order, typically ascending or descending.

-Sorting helps in organizing data efficiently for search, analysis, and processing.

-Various algorithms exist for sorting, each with different efficiency and use cases.

🔹 *Key Features of Sorting:*

* Arranges data in ascending or descending order.

* Improves efficiency of searching and data processing.

* Can be applied to arrays, lists, and other data structures.

* Forms the basis for many advanced algorithms.

🔹 *Types of Sorting Algorithms:*

i> Bubble Sort – Repeatedly swaps adjacent elements if they are in the wrong order.

*Syntax:*

    void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++)
        for(int j = 0; j < n-i-1; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
    }


ii> Selection Sort – Selects the minimum element from the unsorted part and swaps it with the first unsorted element.

*Syntax:*

    void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++)
            if(arr[j] < arr[minIndex])
                minIndex = j;
        swap(arr[i], arr[minIndex]);
    }
    }


iii> Quick Sort – Divides the array into sub-arrays based on a pivot and recursively sorts them.

*Syntax:*

    int partition(int arr[], int low, int high) {
    int pivot = arr[high], i = low-1;
    for(int j = low; j < high; j++)
        if(arr[j] < pivot)
            swap(arr[++i], arr[j]);
    swap(arr[i+1], arr[high]);
    return i+1;
    }

    void quickSort(int arr[], int low, int high) {
    if(low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
    }


🔹 *Advantages of Sorting:*

* Makes data easier to read and analyze.

* Speeds up searching algorithms (like binary search).

* Reduces complexity in further data processing.

* Provides foundation for advanced algorithms like merge sort and heap sort.

# Quick Sorting:

This program demonstrates how to sort an array using the Quick Sort algorithm. The last element of the array is taken as the pivot. Elements smaller than the pivot are moved to the left, and elements greater are moved to the right. The process is applied recursively to sub-arrays until the array is completely sorted.

ALGORITHM:

1> Start

2> Declare and initialize array

* numbers[] = {10, 7, 8, 9, 1, 5}

3> Define partition function

* Choose last element as pivot

* Arrange elements such that smaller elements are left of pivot, larger are right

* Return pivot index

4> Define quickSort function

* If low < high

* Call partition to get pivot index

* Recursively apply quickSort to left sub-array (low to pivotIndex-1)

* Recursively apply quickSort to right sub-array (pivotIndex+1 to high)

5> In main function

* Calculate size of array

* Call quickSort on the array

* Display sorted array

6> End

# Bubble Sort:

This program demonstrates how to sort an array using the Bubble Sort algorithm. In each pass, adjacent elements are compared, and if they are in the wrong order, they are swapped. This process is repeated until the array is completely sorted.

ALGORITHM:

1> Start

2> Declare and initialize array

* numbers[] = {64, 34, 25, 12, 22, 11, 90}

3> Define bubbleSort function

* Loop i from 0 to n-2

* Loop j from 0 to n-i-2

4> In main function

* Calculate size of array

* Call bubbleSort on the array

* Display sorted array

5> End

# Selection Sort:

This program demonstrates how to sort an array using the Selection Sort algorithm. In each iteration, the smallest element from the unsorted portion of the array is selected and swapped with the first element of the unsorted part. This process continues until the entire array is sorted.

ALGORITHM:

1> Start

2> Declare and initialize array

* numbers[] = {64, 25, 12, 22, 11}

3> Selection Sort logic

* Loop i from 0 to n-2

* Initialize minIndex = i

* Loop j from i+1 to n-1

* If numbers[j] < numbers[minIndex], set minIndex = j

* Swap numbers[i] and numbers[minIndex]

4> In main function

* Calculate size of array

* Apply Selection Sort

* Display sorted array

5> End



# Conclusion:

Sorting algorithms in C++ allow efficient arrangement of data in a specific order. Simple methods like Bubble and Selection Sort are easy to implement, while Quick Sort provides faster performance for larger datasets. Understanding these algorithms is essential for programming, data analysis, and optimization tasks.

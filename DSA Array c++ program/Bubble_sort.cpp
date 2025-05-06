// Linear Search: Checks each element one by one; best if the element is at the beginning.

// Binary Search: Only works on sorted data; divides the array in half each time.

// Bubble Sort: Repeatedly swaps adjacent elements if they are in the wrong order.

// Insertion Sort: Builds the final sorted array one item at a time.

// Selection Sort: Selects the smallest (or largest) element and moves it to the sorted position.


// Bubble Sort is a simple sorting algorithm that works by repeatedly swapping adjacent elements
// if they are in the wrong order. It keeps doing this until the entire array is sorted.

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // Outer loop
        for (int j = 0; j < n - i - 1; j++) {  // Inner loop
            if (arr[j] > arr[j + 1]) {
                // Swap if elements are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "After sorting: ";
    printArray(arr, n);

    return 0;
}


// ### ✅ **Step-by-Step Explanation**

// #### 🔹 **Step 1: Include the Header**

// ```cpp
// #include <iostream>
// ```
// This includes input/output functions like `cout`.

// ---

// #### 🔹 **Step 2: Define `bubbleSort` Function**

// ```cpp
// void bubbleSort(int arr[], int n)
// ```
// This function takes an array and its size and sorts it using Bubble Sort.

// ---

// #### 🔹 **Outer Loop**

// ```cpp
// for (int i = 0; i < n - 1; i++)
// ```
// This loop runs `n - 1` times. Each iteration ensures the **next largest element is pushed to the end** of the unsorted part of the array.

// ---

// #### 🔹 **Inner Loop**

// ```cpp
// for (int j = 0; j < n - i - 1; j++)
// ```
// This loop compares and swaps **adjacent elements**. `n - i - 1` makes the inner loop shorter each time since the end part becomes sorted.

// ---

// #### 🔹 **Swapping**

// ```cpp
// if (arr[j] > arr[j + 1])
// ```
// If the current element is **greater than the next one**, we **swap** them:

// ```cpp
// int temp = arr[j];
// arr[j] = arr[j + 1];
// arr[j + 1] = temp;
// ```

// ---

// #### 🔹 **Print Function**

// ```cpp
// void printArray(int arr[], int n)
// ```
// This function prints the array elements.

// ---

// #### 🔹 **Main Function**

// ```cpp
// int main()
// ```
// - Initializes the array.
// - Gets its size using `sizeof(arr)/sizeof(arr[0])`.
// - Prints the array before sorting.
// - Calls the `bubbleSort` function.
// - Prints the array after sorting.

// ---

// ### ✅ Output

// ```
// Before sorting: 5 2 9 1 5 6 
// After sorting: 1 2 5 5 6 9
// ```

// ---


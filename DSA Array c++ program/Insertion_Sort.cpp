// step 1: start with the second element assuming that the 1st element is already sorted
// step 2: compare the key elements with the previous elements
// step 3: if the key element is smaller, shift the larger elements to  the right to make space for the key elem
// step 4: Insert the key element at its correct position
// step 5: Move to the next element and repeat steps 2-4 untill the entire array is sorted.

// 9 4 7 1 5 ==> here key element is 4   4<9


#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Current element to be compared
        int j = i - 1;

        // Move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key; // Insert key at the correct position
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function
int main() {
    int arr[] = {9, 5, 1, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    cout << "Sorted array using Insertion Sort: ";
    printArray(arr, n);

    return 0;
}

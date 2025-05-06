// Traverses and prints it in row-major and column-major order.
//  step 1: Initializes a two-dimensional array
//  step 2 : Traverses and prints it in both row-major and column-major order
#include <iostream>
using namespace std;

#define ROWS 3
#define COLS 3

// Function to initialize a 2D array with values
void initializeArray(int arr[ROWS][COLS]) {
    int value = 1;
    for (int i = 0; i < ROWS; i++) {    // outer loop e row and inner loop e column
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = value++;
        }
    }
}

// Function to print a 2D array in row-major order
void printRowMajor(int arr[ROWS][COLS]) {
    cout << "Row-Major Order:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to print a 2D array in column-major order
void printColumnMajor(int arr[ROWS][COLS]) {
    cout << "Column-Major Order:" << endl;
    for (int j = 0; j < COLS; j++) {
        for (int i = 0; i < ROWS; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Declaring a 2D array
    int matrix[ROWS][COLS];

    // Initializing the 2D array
    initializeArray(matrix);

    // Printing the array in row-major order
    printRowMajor(matrix);

    // Printing the array in column-major order
    printColumnMajor(matrix);

    return 0;
}


// Here is the C++ code that performs all the required tasks:

//     Initializes a one-dimensional array.
//     Performs a linear search.
//     Initializes a two-dimensional array.
//     Traverses and prints it in row-major and column-major order.

#include <iostream>
using namespace std;

void linearSearch(int arr[], int size, int x) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            cout << "Element " << x << " found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element " << x << " not found in the array." << endl;
    }
}

void printRowMajor(int arr[][3], int rows, int cols) {
    cout << "Row-Major Order:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printColumnMajor(int arr[][3], int rows, int cols) {
    cout << "Column-Major Order:" << endl;
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // 1. Initialize a single-dimension array
    int arr1D[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr1D) / sizeof(arr1D[0]);

    // 2. Perform a linear search
    int x;
    cout << "Enter the element to search: ";
    cin >> x;
    linearSearch(arr1D, size, x);

    // 3. Initialize a two-dimensional array
    int arr2D[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // 4. Traverse and print in row-major order
    printRowMajor(arr2D, 3, 3);

    // Traverse and print in column-major order
    printColumnMajor(arr2D, 3, 3);

    return 0;
}

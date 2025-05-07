// Given an array of integers, count the frequency[frequency
//  means how many times the element is present on the array] 
// of each element of the array.

#include <iostream>
using namespace std;

int main() {
int arr[] = {1, 2, 2, 3, 1, 4, 2, 3};
int n = sizeof(arr)/sizeof(arr[0]);
bool visited[100] = {false}; // assuming max array size is less than 100
cout << "Element | Frequency\n";
cout << "--------|----------\n";

for (int i = 0; i < n; i++) {
    if (visited[i])
        continue;

    int count = 1;
    for (int j = i+1; j < n; j++) {
        if (arr[i] == arr[j]) {
            count++;
            visited[j] = true;
        }
    }

    cout << "   " << arr[i] << "     |     " << count << "\n";
}

return 0;
}
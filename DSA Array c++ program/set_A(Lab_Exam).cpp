#include <iostream>
using namespace std;

int main() {
    int n, key = 30; // key is the last two digits of C241130

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Linear Search
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Key " << key << " found at index " << i << ".\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Key " << key << " not found in the array.\n";
    }

    return 0;
}
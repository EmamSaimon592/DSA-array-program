#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, key = 51; // Key from ID C241151

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 1: Sort the array
    sort(arr.begin(), arr.end());

    // Step 2: Insert key (51) into sorted position
    auto pos = lower_bound(arr.begin(), arr.end(), key);
    arr.insert(pos, key);

    // Step 3: Display the result
    cout << "Sorted array after inserting " << key << ":\n";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
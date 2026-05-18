#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of elements present inside the array: ";
    cin >> n;

    int arr[n + 1];   // extra space for insertion

    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << "th element: ";
        cin >> arr[i];
    }

    int x;
    cout << "Enter the element to insert at end: ";
    cin >> x;

    // Insert at end
    arr[n] = x;
    n++;

    cout << "Array after insertion at end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

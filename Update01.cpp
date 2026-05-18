#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[5];

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << "Enter the " << i+1 << "th element: ";
        cin >> arr[i];
    }

    cout << "The obtained array is: " ;

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    arr[2] = 99;

    cout << "replaced array is: ";

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    } 

    return 0;
}
#include <bits\stdc++.h>
using namespace std;

int main() {

    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    // //print the address of first element
    // cout << arr << endl;
    // cout << arr+0 << endl;
    // cout << &arr[0] << endl;
    // cout << ptr << endl;

    // //print the address of second elemenet or 1 index
    // cout << arr+1 << endl;
    // cout << &arr[1] << endl;

    // //print the value of 0 index
    // cout << arr[0] << endl;
    // cout << *arr << endl;
    // cout << *(arr+0) << endl;
    // cout << *ptr << endl;

    // //saare address ko print kardo
    // for (int i = 0; i < 5; i++) {
    //     cout << arr+i << endl;
    // }

    // //print all the values
    // for (int i = 0; i < 5; i++) {
    //     cout << *(arr+i) << endl;
    // }

    // //print all the value
    // for (int i = 0; i < 5; i++) {
    //     cout << ptr[i] << endl;
    // }

    // //print all the address
    // for (int i = 0; i < 5; i++) {
    //     cout << ptr+i << endl;
    // }

    // //arithmetic operation ptr++, ptr--
    // for (int i = 0; i < 5; i++) {
    //     cout << *ptr << endl;
    //     ptr++;
    // }

    //addition

    ptr += 3;
    cout << *ptr << endl;

    ptr -= 2;
    cout << *ptr << endl;

    return 0;
}
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     // vector<int> vec = {1, 2, 2, 3, 4, 2, 5};
//     // int target = 2;

//     // int occurrences = count(vec.begin(), vec.end(), target);

//     // cout << "Element " << target << " occurs " << occurrences << " times." << endl;

//     // vector<int> vec = {4, 2, 8, 6, 1, 9};

//     // int maxElement = *max_element(vec.begin(), vec.end());
//     // int minElement = *min_element(vec.begin(), vec.end());

//     // cout << "Maximum element: " << maxElement << endl;
//     // cout << "Minimum element: " << minElement << endl;

//     vector<int> v = {1, 2, 4, 4, 4, 5, 7};
//     int x = 4;

//     // Lower Bound
//     auto lower = lower_bound(v.begin(), v.end(), x);
//     cout << "Lower Bound of " << x << ": " << (lower - v.begin()) << endl;

//     // Upper Bound
//     auto upper = upper_bound(v.begin(), v.end(), x);
//     cout << "Upper Bound of " << x << ": " << (upper - v.begin()) << endl;

//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

// Function that takes a vector as parameter
void printVector(const vector<int>& v) {
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> myVector = {1, 2, 3, 4, 5};
    printVector(myVector);  // Passing vector to function
    return 0;
}

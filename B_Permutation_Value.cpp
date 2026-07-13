#include <iostream>
#include <vector>

using namespace std;

/**
 * Strategy:
 * Use a two-pointer approach to generate the alternating sequence.
 * This ensures O(N) time complexity and O(1) auxiliary space.
 */

void execute_construction() {
    int n;
    if (!(cin >> n)) return;

    int head = 1;
    int tail = n;

    // We alternate between the smallest available and largest available numbers
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            cout << head++ << (i == n - 1 ? "" : " ");
        } else {
            cout << tail-- << (i == n - 1 ? "" : " ");
        }
    }
    cout << "\n";
}

int main() {
    // Fast I/O is crucial for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases;
    if (!(cin >> test_cases)) {
        test_cases = 1; 
    }

    while (test_cases--) {
        execute_construction();
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n, A = 0, D = 0;
    string s;
    cin >> n >> s;
    for (char c : s) (c == 'A' ? A : D)++;
    cout << (A > D ? "Anton" : D > A ? "Danik" : "Friendship");
    return 0;
}

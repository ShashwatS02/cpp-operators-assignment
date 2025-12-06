#include <iostream>
using namespace std;

int main() {
    int m, total = 0;
    string fig;
    cin >> m;
    while (m--) {
        cin >> fig;
        if (fig[0] == 'T') total += 4;
        else if (fig[0] == 'C') total += 6;
        else if (fig[0] == 'O') total += 8;
        else if (fig[0] == 'D') total += 12;
        else total += 20;
    }
    cout << total;
    return 0;
}

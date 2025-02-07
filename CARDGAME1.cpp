#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {

        cin >> n >> x;
        if (x % 2 == 0) {

            cout << (n / 2) - 1 << endl;
        }
        else {
            cout << (n + 1) / 2 - 1 << endl;
        }

    }



}
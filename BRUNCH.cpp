#include <bits/stdc++.h>

using namespace std;

int maxneighbour(int x, int y) {
    return min(x / y, 20);
     }
int main() {
    int t;
    cin >> t;
    while (t--) {


        int x, y;
        cin >> x >> y;


        cout << maxneighbour(x, y) << endl;
    }
    return 0;




}
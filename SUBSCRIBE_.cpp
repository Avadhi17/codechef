#include <iostream>
#include<cmath>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while ( t --)
     {
        int n, x;
        cin >> n >> x;
        int subs_needed;
        subs_needed = (n + 5) / 6;
        int cost;
        cost = subs_needed * x;

        cout << cost << endl;} 
        return 0;
}
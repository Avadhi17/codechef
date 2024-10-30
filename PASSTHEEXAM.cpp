#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {

     int a, b, c;
    cin >> a >> b >> c;

   int net = a + b + c;
        
    if(net >= 100 && a>=10 && b>=10&& c>=10)
     { 
         cout<< "Pass"<< endl;}
         
    else{
        cout<< "Fail"<< endl;
    }     
         
    } return 0;

}
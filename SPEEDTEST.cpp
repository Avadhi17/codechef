#include <bits/stdc++.h>
using namespace std;

int main() {


 int t;
 cin>> t;
 while ( t --){
     
     
     int a,x,b,y;
     cin>>a>>x>>b>>y ;
     
     int alice= a * y;
     int bob = b* x;
      
    if ( alice > bob){
        cout<< "Alice"<< endl;
    }
    else if ( alice< bob){
        cout<< "Bob"<< endl;
    }
    else{
        cout<<"Equal"<< endl;
    }
 } return 0;

}

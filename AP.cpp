#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int t ;
 cin >> t  ;
 while (t > 0 ) 
   { t = t - 1 ;
    int x , y , z ;
   
    cin >> x >> y >> z;
    
    if (y - x == z - y)
    {cout<< 0  << endl; }
    else
    {  cout<< 1 << endl ; }
   }
   return 0;
     
}

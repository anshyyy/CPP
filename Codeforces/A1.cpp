#include <bits/stdc++.h>
using namespace std;
int main() {
     long double a,n, m,temp;
     cin>>n>>m>>a;
       if(m < n)
    {
        temp = m;
        m = n;
        n = temp;
    }
     if (a>=m)
     {
         cout<<ceil(m/a)<<endl;
     }
     else
     {
         cout<<ceil(m/a)*ceil(n/a)<<endl;
     }
     

     return 0;
}
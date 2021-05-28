#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
     int a,b,c,d,n;
     cin>>n;
     while (true)
     {
         n++;
         a=n%10;
         b=(n/10)%10;
         c=(n/100)%10;
         d=(n/1000)%10;
         if (a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
         {
             break;
         }
         
     }
      cout<<n<<endl;
     return 0;
}
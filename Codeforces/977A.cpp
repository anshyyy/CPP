#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int n,k;
     cin>>n>>k;
     while (k--)
     {
         if (n%10==0)
         {
             n=n/10;
         }
         else n=n-1;
     }
     cout<<n<<endl;
     return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     ll n,a,odd(0),even(0);
     cin>>n;
     while (n--)
     {
         cin>>a;
         if(a%2==0){
             even++;
         }
         else
         {
             odd++;
         }
     }
     cout<<(odd%2==1?odd:even)<<endl;
     return 0;
}
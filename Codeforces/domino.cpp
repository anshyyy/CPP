#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     ll t;
     cin>>t;
     while(t--){
         int n,k1,k2,w,b;
         cin>>n>>k1>>k2>>w>>b;
         if(2*w<=(k1+k2)&&2*b<=(2*n-k1-k2)){
             cout<<"YES\n";
         }
         else
         {
             cout<<"No\n";
         }
         
     }
     return 0;
}
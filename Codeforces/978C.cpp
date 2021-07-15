#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(i,n) for(long long i=0;i<n;i++)
#define for1(i,n) for(long long i=1;i<=n;i++)
using namespace std;
void solve(){ 
       ll n,p;
      cin>>n>>p;
      ll sum=0,id=1;
      ll dor[n];
      for1(i,n) cin>>dor[i];
      loop(i,p){
           ll x;
           cin>>x;
           while(sum+dor[id]<x) sum+=dor[id++];
           cout<<id<<" "<<x-sum<<endl;
      }
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
      return 0;
}
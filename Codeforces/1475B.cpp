#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     int c1=n%2020;
     int c0=(n-c1)/2020-c1;
     if(c0>=0&&2020*c0+2021*c1==n) cout<<"YES\n";
     else cout<<"NO\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
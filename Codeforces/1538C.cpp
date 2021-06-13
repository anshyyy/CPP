#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     int n,l,r;
     cin>>n>>l>>r;
     vector<int> a(n);
     for(int &e: a){
         cin>>e;
     }
     sort(a.begin(),a.end());
     ll ans=0;
     loop(n){
         ans+=upper_bound(a.begin(),a.end(),r-a[i])-a.begin();
         ans-=lower_bound(a.begin(),a.end(),l-a[i])-a.begin();
         if(l<=2*a[i]&&2*a[i]<=r) ans--;
     }
     cout<<ans/2<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
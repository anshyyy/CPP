#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     ll a,b,n;
     cin>>a>>b>>n;
     int po[n];
     int he[n];
     loop(n) cin>>po[i];
     loop(n) cin>>he[i];
     int64_t dam=0;
     for (int i = 0; i <n; i++)
     {
          dam+=(he[i]+a-1)/a*po[i];
     }
     
     for (int i = 0; i <n; i++)
     {
         if (b-(dam-po[i])>0)
         {
             cout<<"YES\n";
             return ;
         }
     }
     
    // (b>0)?cout<<"YES\n":cout<<"NO\n";
    cout<<"NO\n";
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
void solve(){
    ll n,x,max=0;
    cin>>n>>x;
    int s[n],r[x];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i]>>r[i];
        if (x>=s[i])
        {
           if (r[i]>max)
           {
               max=r[i];
           }
           
        }
        

    }
    cout<<max<<endl;
    
}
int main() {
     ll t;
     cin>>t;
     while(t--){
         solve();
     }
     return 0;
}
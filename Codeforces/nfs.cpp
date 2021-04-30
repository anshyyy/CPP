#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
void solve(){
    double u ,v,a,s;
    cin>>u>>v>>a>>s;
    if (u<=v)
    {
        cout<<"YES"<<endl;
    }
    if (u>v)
    {
     if (v>sqrt(u*u-2*a*s))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }  
    } 
}
int main() {
     ll t;
     cin>>t;
     while(t--){
         solve();
     }
     return 0;
     
}
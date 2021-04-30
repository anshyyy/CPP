#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;cin>>s;
    int p=-1;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='*'){
            p=i;
            break;
        }
    }
    int ans=1;
    while(true){
        bool found=false;
        for (int i = min(n,p+k+1); i>=p+1; i--)
        {
            if(s[i]=='*'){
                p=i;
                ans++;
                found=true;
                break;
            }
        }
        if(!found)break;
    }
    cout<<ans<<endl;
    
}
int main() {
     int t;
     cin>>t;
     while(t--){
         solve();
     }
     return 0;
}
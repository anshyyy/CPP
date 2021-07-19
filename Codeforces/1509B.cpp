#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
bool solve(){ 
    int n;cin>>n;
    string s;
    cin>>s;
    vector<int> t,m;
    for (int i = 0; i <s.size(); i++)
    {
        if(s[i]=='T') t.push_back(i);
        else m.push_back(i);
    }
    if(t.size()!=2*m.size()){
        return false;
    }
    for (int i = 0; i <m.size(); i++)
    {
        if(m[i]<t[i]||m[i]>t[i+m.size()]){
           // cout<<"NO\n";
            return false;
        }
    }
    //cout<<"YES\n";
    return true;
    
    
}
int main() {
int t=1;
cin>>t;
while(t--){
 cout<<(solve() ? "YES\n" : "NO\n"); 
}
     return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     int n = s.size();
    int pos = 0;
    for (int i = 0; i <s.size()-1; i++)
    {
        if(s[i]-'0'+s[i+1]-'0'>=10){
            pos = i;
        }
    }
    loop(i,0,pos)cout<<s[i];
    int x = s[pos]-'0'+s[pos+1]-'0';
    cout<<x;
    loop(i,pos+2,n) cout<<s[i];
    cout<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
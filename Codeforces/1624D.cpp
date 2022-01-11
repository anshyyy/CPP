#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>f(26,0);
    int ans = 0,pairs=0,single=0;
    loop(i,0,n)f[s[i]-'a']++;
    for (int i = 0; i < 26; i++)
    {
        pairs=pairs+f[i]/2;
        single = single + f[i]%2;
    }
    ans+= (pairs/k)*2;
    single += (pairs-(pairs/k)*k)*2;
    if(single>=k) ans++;
    cout<<ans<<endl;
    

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
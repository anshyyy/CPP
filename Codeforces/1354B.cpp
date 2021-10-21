#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     int n=s.size();
     int l =0,ans=n+1;
     int cnt[4] = {};
     for (int i = 0; i < n; i++)
     {
         int dig = s[i]-'0';
         cnt[dig]++;
         while(cnt[s[l]-'0']>1){
             cnt[s[l]-'0']--;
             l++;
         }
         if(cnt[1]&&cnt[2]&&cnt[3])
           ans= min(ans,i-l+1);
     }
     if(ans==n+1)
        ans = 0;
    
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
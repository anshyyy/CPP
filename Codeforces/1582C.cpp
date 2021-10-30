#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     string s;
     cin>>s;
     int count=0,ans=INT_MAX;
     for (int c = 0; c < 26; c++)
     {
         int l = 0;
         int r = n-1;
         count=0;
         while(l<=r){
             if(s[l]==s[r]){
                 l++;
                 r--;
             }
             else if(s[l]==char('a'+c)){
                 count++;
                 l++;
             }
             else if(s[r]==char('a'+c)){
                 count++;
                 r--;
             }
             else{
                 count = n+1;
                 break;
             }
         }
         ans = min(ans,count);

     }
     if(ans==n+1)cout<<"-1\n";
     else cout<<ans<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
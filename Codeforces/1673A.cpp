#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     string s;cin>>s;
     int n = s.size();
     if(n==1){
         cout<<"Bob "<<int(s[0]-'a')+1<<endl;
         return;
     }
     if(n%2==0){
         cout<<"Alice ";
         int ans = 0;
         for (int i = 0; i < n; i++)
         {
             ans+= int(s[i]-'a')+1;
         }
         cout<<ans<<endl;
     }
     else{
         int ans = 0,ans2=0;
         int whole = 0;
         for (int i = 0; i < n; i++)
         {
             whole+= int(s[i]-'a')+1;
         }
         ans = whole - (int(s[0]-'a')+1);
         ans2 = whole - (int(s[n-1]-'a')+1);
        // cout<<whole<<" "<<ans<<" "<<ans2<<endl;
         if(ans>ans2){
             cout<<"Alice "<<ans - (int(s[0]-'a')+1)<<endl;
         }
         else{
             cout<<"Alice "<<ans2 - (int(s[n-1]-'a')+1)<<endl;
         }
     }
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
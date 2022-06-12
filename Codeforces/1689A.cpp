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
     ll n,m,k;cin>>n>>m>>k;
     string s,t;
     cin>>s>>t;
     sort(all(s));
     sort(all(t));
     int i =0,j=0;
     int cnt1=0,cnt2=0;
     string res = "";
     while(i<n && j<m){
         if(s[i]<t[j] && cnt1<k){
             res+=s[i++];
             cnt1++;
             cnt2=0;
         }
         else if(s[i]>t[j] && cnt2<k){
             res+=t[j++];
             cnt2++;
             cnt1=0;
         }
        else if(cnt1>=k  ){
             res+=t[j++];
             cnt1=0;
             cnt2++;
         }
         else if(cnt2>=k){
              res+=s[i++];
              cnt1++;
              cnt2=0;
         }
     }
     cout<<res<<endl;
}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
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
     string s;
     cin>>s;
     ll p;cin>>p;
     ll w  = 0;
     string t= s;
     sort(all(t));
     map<ll,ll>mp;
     for(int i = 0;i<s.size();i++){
        w += (s[i] -'a')+1;
     }
     ll l = s.size()-1;
     if(w<=p){
        cout<<s<<endl;;
        return;
     }

     while(l>=0&&w>p){
       w-=t[l]-'a'+1;
       mp[t[l]]++;
       l--;
     }
     for (int i = 0; i<s.size(); i++)
     {
        if(mp[s[i]]>0) mp[s[i]]--;
        else cout<<s[i];
     }
     cout<<endl;
     


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
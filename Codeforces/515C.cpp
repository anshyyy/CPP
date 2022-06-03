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
     int n;cin>>n;
     string s;cin>>s;
     unordered_map<int ,string>mp;
     mp[4]="223";
     mp[6]="53";
     mp[8]="7222";
     mp[9]="7332";
     string res = "";
     for (int i = 0; i < n; i++)
     {
          if(s[i]>'1' && s[i]>'0'){
              if(mp.find(s[i]-'0')!=mp.end()){
                  res+=mp[s[i]-'0'];
              } else res+=s[i];
          }
     }
     sort(allr(res));
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
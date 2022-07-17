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
     unordered_map<char,int>mp1,mp2;
     string s;cin>>s;
     for(int i=0;i<n;i++){
        if(i%2)mp1[s[i]]++;
        else mp2[s[i]]++;
     }
     for(auto x : mp1){
       // cout<<x.ff<<" "<<x.ss<<endl;
        if(mp2.find(x.ff)==mp2.end() || mp2[x.ff]!=x.ss){
            cout<<"NO\n";
            return;
        }
     }
     cout<<"YES\n";
    //  cout<<endl;
    //  for(auto x : mp2){
    //     cout<<x.ff<<" "<<x.ss<<endl;
    //  }
    //  cout<<endl;
   
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
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
bool isS(string s, string t) {
       int idx=0;
        for(int i=0 ; i<t.size() ; i++){
            if(t[i] == s[idx]) idx++;
        }
        if(idx == s.size()) return true;
        else return false; 
    }
void solve(){ 
     int n,m;cin>>n>>m;
     string s,t;cin>>s>>t;
    //  if(s.find(t)){
    //     cout<<"YES\n";
    //     return;
    //  }
     if(isS(t,s)){
        cout<<"YES\n";
        return ;
     }
     cout<<"NO\n";
     
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
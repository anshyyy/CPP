#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
bool isSubsequence(string s, string t) {
       int idx=0;
        for(int i=0 ; i<t.size() ; i++){
            if(t[i] == s[idx]) idx++;
        }
        if(idx == s.size()) return true;
        else return false; 
    }
void solve(){ 
    ll n,m;
    cin>>n>>m; 
  string s,t;cin>>s>>t; 
  for(int i=0;i<5;i++){ 
    string s1(s.size(),0); 
    for(int j=0;j<s.size();j++){ 
      if(s[j]=='?'){ 
        s1[j]=(char)(i+'a'); 
      } 
      else{ 
        s1[j]=s[j]; 
      } 
    } 
    if(!isSubsequence(t,s1)){ 
      cout<<s1<<endl; 
      return; 
    } 
  } 
  cout<<-1<<endl; 
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
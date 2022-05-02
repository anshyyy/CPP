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
     set<int> ss (all(s));
     bool up=false,low = false;
     for(int i = 0;i<int(s.size());i++){
          if(s[i]>=97 && s[i] <=122){
               up = true;
          }
          if(s[i]>=65 && s[i]<=90){
               low = true;
          }
     }
     if(up && low && s.size()==ss.size()){
          cout<<"Yes\n";
          return;
     }
     cout<<"No\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
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
void solve(){ 
     int n;
     cin>>n;
     string s;
     cin>>s;
     string res;
     if(all_of(all(s),[&](char i){return i == s[0];})){
         cout<<n<<"\n  \n";
         return;
     }
     int change = 0;
     for(int i = 0;i<n;i++){
         if(res.size()%2==0||res.back()!=s[i])change++,res.push_back(s[i]);
     }
     if(res.size()%2)change++,res.pop_back();
     cout<<n-(int)res.size()<<endl<<res<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
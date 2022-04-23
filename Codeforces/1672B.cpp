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
     int a=0,b=0;
     bool flag = true;
     int n = s.size();
     for(auto i : s){
         if(i=='B') b++;
         else a++;
         if(a<b) flag = false;
     }
     if(s[n-1]!='B' || s[0]!='A'){
         flag = false;
     }
     cout<<(flag ? "YES\n":"NO\n");
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
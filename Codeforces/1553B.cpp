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
     string s1,s2;
     cin>>s1>>s2;
     for (int i = 0; i < s1.size(); i++)
     {
       string ans1 = s1.substr(0,i+1);
        string ans2 = s1.substr(0,i);
         reverse(all(ans2));
         ans1+=ans2;
         if(ans1.find(s2)!=-1){
             cout<<"YES\n";
             return;
         }
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
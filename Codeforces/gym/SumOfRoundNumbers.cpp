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
     vector<int>ans;
     for (int i = 0; i < s.size(); i++)
     {
         string tt = "";
         if(int(s[i])-'0'>0){
              int zero = s.size()-i-1;
              tt+=s[i];
              while(zero--){
                  tt+='0';
              }
              ans.push_back(stoi(tt));
         }
     }
     cout<<ans.size()<<endl;
     loop(i,0,ans.size())cout<<ans[i]<<" ";
     cout<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
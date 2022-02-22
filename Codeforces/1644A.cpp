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
     string s;
     cin>>s;
     map<char,int>m;
     for(int i =0;i<6;i++){
        m[s[i]]=i+1;
     }
     bool flag = true;
     for(auto x : m){
         char ss = x.first;
         int id = x.second;
         for(auto y :m){
             if(ss+32==y.first){
                 if(id<y.second){
                     flag = false;
                     break;
                 }
             }
         }
     }
     flag?cout<<"YES\n":cout<<"NO\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
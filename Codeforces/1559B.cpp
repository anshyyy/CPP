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
     string res="";
     loop(i,0,n)res+=s[i];
     if(s[0]=='?'){
         s[0]='R';
     }
     for(int i = 1;i<n;i++){
         if(s[i]=='?'){
             if(s[i-1]=='R'){
                 s[i]='B';
             }
             else s[i]='R';
         }
     }
     if(res[0]=='?'){
         res[0]='B';
     }
     for(int i =1;i<n;i++){
         if(res[i]=='?'){
              if(res[i-1]=='R'){
                  res[i]='B';
              }
              else res[i]='R';
         }
     }
     int ss =0,ress=0;
     for(int i=0;i<n;i++){
         if(s[i+1]==s[i]) ss++;
     }
     for(int i=0;i<n;i++){
         if(res[i]==res[i+1])ress++;
     }
     //cout<<res<<endl<<s<<endl;
     if(ress>ss){
         cout<<s<<endl;
     }
     else cout<<res<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
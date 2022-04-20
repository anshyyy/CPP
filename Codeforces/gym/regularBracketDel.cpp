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
     int a=0,b=0;
     string s;cin>>s;
     string ss = "";
     for(int i = 0;i<n;i++){
         ss+=s[i];
         if(ss=="()" or ss=="((" or ss=="))"){
             b+=2;
             ss="";
             a++;
         }
         else if(ss.size() >1){
             if(s[i]==')'){
                 b+=ss.size();
                 a++;
                 ss="";
             }
         }
     }
     cout<<a<<" "<<n-b<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
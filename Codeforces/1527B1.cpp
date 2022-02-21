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
bool isPal(string s){for(int i =0;i<s.size()/2;i++){if(s[i]!=s[s.size()-1-i]) return false;}return true;}
void solve(){ 
     int n ;
     cin>>n;
     string s;
     cin>>s;
     int bob=0,alice=0;
     int zero = count(all(s),'0');
     if(zero<=2&&zero!=0){
         cout<<"BOB\n";
         return;
     }
    //  if((zero==0)||(zero>2&&!(zero&(zero-1)))){
    //      cout<<"DRAW\n";
    //      return;
    //  }
     if(zero%2==0)cout<<"BOB\n";
     else cout<<"ALICE\n";



}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
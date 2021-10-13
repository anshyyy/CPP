#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
long long int answer(string s, string x){
    ll count =0;
    ll n = s.size();
    ll m = x.size();
    while(s.size()>0 && x.size()>0){
        if(s.back()==x.back()){
            x.pop_back();
        }
        else{ count++;
        }
        s.pop_back();

    }
    if(x.size()==0){
        return count;
    }
    return n;
}
void solve(){ 
     string s;
     cin>>s;
     ll zz = answer(s,"00");
     ll tf = answer(s,"25");
     ll sf = answer(s,"75");
     ll fz = answer(s,"50");
     cout<<min({zz,tf,sf,fz})<<endl;
}
     
int main() {
IOS
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
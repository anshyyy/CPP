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
     ll n = s.size();
     ll one = s.size()-1;
     ll zero = 0;
    while(one>0){
        if(s[one]!='1') one--;
        else break;
    }
    while(zero<n-1){
        if(s[zero]!='0')zero++;
        else break;
    }
    cout<<abs(zero-one)+1<<endl;;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
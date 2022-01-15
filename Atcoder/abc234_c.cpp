#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
string convert(ll x){
    string res;
    while(x>0){
        res.push_back('0'+(x%2));
        x/=2;
    }
    reverse(res.begin(),res.end());
    return res;
}
void output(string s){
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='1')cout<<"2";
        else cout<<"0";
    }
    cout<<endl;
}
void solve(){ 
     ll x;
     cin>>x;
     output(convert(x));

}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}
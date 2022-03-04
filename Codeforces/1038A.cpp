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
     int n,k;
     cin>>n>>k;
     string s;
     cin>>s;
     unordered_map<char,int>m;
     loop(i,0,k){
         m[65+i]=0;
     }
    // for(auto x : m)cout<<x.first<<" "<<x.second<<endl;
     loop(i,0,n) m[s[i]]++;
    // for(auto x : m)cout<<x.first<<" "<<x.second<<endl;
     int mini = INT_MAX;
     for(auto x : m){
        mini = min(mini,x.second);
     }
     mini*k > n ? cout<<"0\n" : cout<<mini*k<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
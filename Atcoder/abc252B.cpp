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
     int n,k;
     cin>>n>>k;
     map<int,int>mp;
     int maxi = INT_MIN;
     for (int i = 0; i < n; i++)
     {
         int x;cin>>x;
         maxi = max(x,maxi);
         mp[i+1]=x;
     }
     bool yes = false;
     for (int i = 0; i < k; i++)
     {
         int x;cin>>x;
         if(mp[x]==maxi){
             yes = true;
         }
     }
    yes?cout<<"Yes\n":cout<<"No\n";
}
int main() {
IOS;
int t=1;

while(t--){
 solve(); 
}
     return 0;
}
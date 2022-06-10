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
unsigned int ffs(int n)
{
    return n & -n;
}
void solve(){ 
     int n,k;cin>>n>>k;
     vector<int>ans(n+1);
     int id = 0;
     for (int i = k; i >=1&&n; i--)
     {
         int x = ffs(i);
         if(n-x<0)continue;
         else{
          n-=x;
          ans[id++]=i;
         }
     }
     if(n){
         cout<<"-1\n";
         return;}
    cout<<id<<endl;
    loop(i,0,id)cout<<ans[i]<<" ";
    cout<<endl;
}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
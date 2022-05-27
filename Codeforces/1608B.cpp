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
     int n,a,b;
     cin>>n>>a>>b;
     int l =1,r=n,t=a>b;
     if(abs(a-b)>1 || a+b+2 >n){
         cout<<"-1\n";
         return;
     }
     for (int i = 1; i < n+1; i++)
     {
         if(t)cout<<l++<<" ";
         else cout<<r--<<" ";
         if(a+b>=i) t^=1;
     }
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
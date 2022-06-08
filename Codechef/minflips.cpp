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
     int n;
     cin>>n;
     int minus =0,plus =0;
     for (int i = 0; i < n; i++)
     {
         int x;cin>>x;
         if(x==1)plus++;
         else minus++;
     }
     if(n%2){
         cout<<"-1\n";
         return;
     }
     if(minus==n||plus==n){
         cout<<n/2<<endl;
         return;
     }
     cout<<(n/2 )-min(minus,plus)<<endl;
     
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
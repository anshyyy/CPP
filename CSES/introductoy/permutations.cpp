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
     if(n==1){
         cout<<"1\n";
         return;
     }
     if(n==4){
         cout<<"2 4 1 3 \n";
         return;
     }
     if(n<=3){
         cout<<"NO SOLUTION\n";
         return;
     }
     for (int i = 1; i <=n; i++)
     {
         if(i%2)cout<<i<<" ";
     }
     for (int i = 1; i <=n; i++)
     {
         if(i%2==0)cout<<i<<" ";
     }
}
int main() {
IOS;
int t=1;

while(t--){
 solve(); 
}
     return 0;
}
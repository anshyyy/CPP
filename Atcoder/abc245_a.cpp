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
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     if (a < c){
         cout<<"Takahashi\n";
         return;
     }
     if (a>c){
         cout<<"Aoki\n";
         return;
     }
     if(a==c){
         if(b<=d){
             cout<<"Takahashi\n";
         }
         else{
             cout<<"Aoki\n";
         }
     }
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
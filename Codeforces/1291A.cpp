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
     int n;
     cin>>n;
     string s;
     cin>>s;
     int odd = 0;
     for(auto x : s){
         if(x%2) odd++;
     }
 if(n<=1||odd<2){
         cout<<"-1\n";
         return;
     }
     int a = 2;
     string res = "";
     for (int i = 0; i < n; i++)
     {
         if(a>0){
             if(s[i]%2){
                cout<<s[i];
                 a--;
             }
         }
     }
     cout<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
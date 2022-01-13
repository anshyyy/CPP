#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<vector<bool>>mark(n+1,vector<bool>(n+1,false));
     vector<int>l(n),r(n);
     for (int i = 0; i < n; i++)
     {
         cin>>l[i]>>r[i];
         mark[l[i]][r[i]]=true;
     }
     for (int i = 0; i <n; i++)
     {
         for (int d = l[i]; d <=r[i]; d++)
         {
             cout<<d<<endl;
            if((d==l[i]||mark[l[i]][d-1])&&(d==r[i]||mark[d+1][r[i]])){
                cout<<l[i]<<" "<<r[i]<<" "<<d<<endl;
                break;
            }
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
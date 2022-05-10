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
     ll n,m;
     cin>>n>>m;
     char s[100][100];
     for (int i = 0; i <n; i++)
     {
       for (int j = 0; j < m; j++)
       {
            cin>>s[i][j];
       }
       
     }
     int mini = INT32_MAX;
     for (int i = 0; i < n; i++)
     {
          for (int j = i+1; j <n; j++)
          {
               int war = 0;
               for (int k = 0; k <m; k++)
               {
                    war += abs(s[i][k]-s[j][k]);
               }
               mini = min(war,mini);
          }
     }
     
     cout<<mini<<endl;
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
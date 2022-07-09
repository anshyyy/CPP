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
     char s[11][11]={};
     int maxi=0,x=-1,y=-1;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>s[i][j];
            if(s[i][j]-'0'>maxi){
                maxi = s[i][j]-'0';
                x = i;
                y = j;
            }
        }
     }
    // cout<<maxi<<" "<<x<<" "<<y<<endl;
     int ans =0;
     for(int i=x;i<=n;i++){
        for(int j =y;j<=n;j++){
            int u = s[i-1][j];
            int d = s[i+1][j];
            int l = s[i][j-1];
            int r = s[i][j+1];
            int ul = s[i-1][j+1];
            int ur = s[i-1][j-1];
            int dl = s[i+1][j+1];
            int dr = s[i+1][j-1];
            ans = max({u,d,l,r,ul,ur,dl,dr});
            //cout<<ans - '0';
        }
        cout<<ans - '0';
     }

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
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     int arr[n][5];
     loop(i,0,n)
        loop(j,0,5) cin>>arr[i][j];
    bool flag = false;
    for (int i = 0; i <4; i++)
    {
       for (int j = i+1; j < 5; j++)
       {
           int first=0,second=0,both=0;
           for(int k=0;k<n;k++){
               if(arr[k][i]&&arr[k][j]==1) both++;
               else if(arr[k][j]==1) second++;
               else if(arr[k][i]==1) first++;
           }
           ll nf=n/2-first,ns=n/2-second;
           if(nf>=0&&ns>=0&&both==nf+ns){
               flag = true;
               break;
           }
       }
       if(flag)break;
       
    }
    if(flag)cout<<"YES\n";
    else cout<<"NO\n";
  // cout<<flag?"YES\n":"NO\n";
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
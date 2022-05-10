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
     int n,m;cin>>n>>m;
     ll maxi = INT_MIN;
     int arr[n][m];
     int xcor = -1,ycor=-1;
     loop(i,0,n)loop(j,0,m)cin>>arr[i][j];
     loop(i,0,n)
     {
         loop(j,0,m)
         {
             ll ans = arr[i][j];
             xcor = i,ycor = j;
             for(;xcor>0&&ycor>0;){
                 xcor--;ycor--;
                 ans+=arr[xcor][ycor];
             }
             xcor = i,ycor=j;
              for(;xcor<n-1&&ycor>0;){
                 xcor++; ycor--;
                 ans+=arr[xcor][ycor];
             }
             xcor=i,ycor=j;
              for(;xcor>0&&ycor<m-1;){
                 xcor--;ycor++;
                 ans+=arr[xcor][ycor];
             }
             xcor=i,ycor=j;
              for(;xcor<n-1&&ycor<m-1;){
                 xcor++;
                 ycor++;
                 ans+=arr[xcor][ycor];
             }
             maxi = max(ans,maxi);
         }
         
     }
     cout<<maxi<<endl;
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
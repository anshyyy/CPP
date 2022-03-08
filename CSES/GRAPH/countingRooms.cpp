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
int N,M;
int vis[1001][10001];
char arr [1001][1001];
bool isValid(int x,int y){
     if(x<1||x>N||y<1||y>M)
       return false;
     if(vis[x][y]||arr[x][y]=='#') return false;
     return true;
}
void dfs(int x,int y){
    vis[x][y] = 1;
    if(isValid(x-1,y))
       dfs(x-1,y);
    if(isValid(x,y+1))
       dfs(x,y+1);
    if(isValid(x+1,y))
      dfs(x+1,y);
    if(isValid(x,y-1))
      dfs(x,y-1);
}
void solve(){ 
     cin>>N>>M;
     loop(i,1,N+1)loop(j,1,M+1) cin>>arr[i][j];
     int cnt = 0;
     for(int i =1;i<=N;i++){
         for(int j = 1;j<=M;j++){
             if(arr[i][j]=='.'&&!vis[i][j]){
                cnt++;
                dfs(i,j);
             }
         }
     }
     cout<<cnt<<endl;
}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}
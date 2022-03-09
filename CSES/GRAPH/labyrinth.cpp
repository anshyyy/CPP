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
int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1}; 
int previousStep[1001][1001];
string st = "URDL";
bool isValid(int x,int y){
     if(x<1||x>N||y<1||y>M)
       return false;
     if(vis[x][y]||arr[x][y]=='#') return false;
     return true;
}
void solve(){ 
     cin>>N>>M;
     pair<int,int>bb;
     pair<int,int>ee;
     loop(i,0,N){
     loop(j,0,M){
        cin>>arr[i][j];
        if(arr[i][j]=='A') bb = {i,j};
        else if (arr[i][j]=='B') ee = {i,j};
     }
     }
     //cout <<ee.first<<" "<<ee.second<<endl;
     queue<pair<int,int>>q;
     q.push(bb);
     vis[bb.first][bb.second]=1;
     while(!q.empty()){
         pair<int,int>u=q.front();
         q.pop();
         for (int i = 0; i < 4; i++)
         {
             pair<int,int> v = {u.first+dx[i],u.second+dy[i]};
             if(v.first<0||v.first>=N||v.second<0||v.second>=M) continue;
             if(arr[v.first][v.second]=='#') continue;
             if(vis[v.first][v.second]) continue;
             vis[v.first][v.second]=true;
             previousStep[v.first][v.second]=i;
             q.push(v);
         }
         
     }
     if(vis[ee.first][ee.second]){
         cout<<"YES\n";
         vector<int>steps;
         while(ee!=bb){
             int p = previousStep[ee.first][ee.second];
             steps.push_back(p);
             ee = {ee.first-dx[p],ee.second-dy[p]};
         }
         reverse(all(steps));
         cout<<steps.size()<<endl;
        //  loop(i,0,steps.size()) cout<<steps[i]<<" ";
        //  cout<<endl;
         for(auto c : steps)
             cout<<st[c];
        cout<<endl;
     }
     else cout<<"NO\n";

     
}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}
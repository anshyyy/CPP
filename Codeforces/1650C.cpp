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
struct Input{
    int x,w,i;
    Input(int x,int w,int i){
        this->x = x;
        this->w = w;
        this->i = i;
    }
};
void solve(){ 
     int n,m;
     cin>>n>>m;
     vector<Input>arr;
     for (int i = 0; i < m; i++)
     {
         int x,w;
         cin>>x>>w;
         arr.emplace_back(x,w,i);
     }
     sort(all(arr),[](auto &x,auto &y){return x.w<y.w;});
     ll w = 0;
     vector<pair<int,int>>vv;
     for (int i = 0; i <2*n; i++)
     {
         w += arr[i].w;
         vv.push_back({arr[i].x,arr[i].i+1});
     }
     sort(all(vv));
     cout<<w<<endl;
     for (int i = 0,j=2*n-1; i <j; i++,j--)
     {
         cout<<vv[i].second<<" "<<vv[j].second<<endl;
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
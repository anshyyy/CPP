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
     int n;
     cin>>n;
     int k;cin>>k;
     queue<int>a,b;
     loop(i,0,k){
         int x;cin>>x;
         a.push(x);
     }
     cin>>k;
     loop(i,0,k){
         int x;cin>>x;
         b.push(x);
     }
     int cnt = 0;
      set<pair<int,int>>vis;
     while(!b.empty()&&!a.empty() && cnt<10009){
         int x=a.front();a.pop();
         int y = b.front();b.pop();
        // cout<<x<<" "<<y<<" "<<a.empty()<<" "<<b.empty()<<endl;
           if(x>y){
               a.push(y);
               a.push(x);
              // vis.insert({x,y});
           }
           else {
               b.push(x);
               b.push(y);
              // vis.insert({x,y});
           }
           cnt++;
     }
     if(cnt>10000){
         cout<<"-1\n";
         return;
     }
     cout<<cnt<<" ";
     if(a.empty())cout<<2<<endl;
     else cout<<"1\n";
}
int main() {
IOS;
int t=1;
// cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
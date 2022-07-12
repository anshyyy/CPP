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
     int n ;
     cin>>n;
     vector<pair<int,int>>arr;
     unordered_map<string,int>vis;
     unordered_set<int>pres;
     loop(i,0,n){
        int x,y;
        cin>>x>>y;
        arr.push_back({x,y});
        string temp = to_string(x)+'*'+to_string(y);
        vis[temp] += 1;
     }
    //  for(auto s : vis){
    //     cout<<s.ff<<" "<<s.ss<<endl;
    //  }
     int i =0;
     while(pres.size()<n && i<n){
        int f = arr[i].ff;
        int se = arr[i].ss;
        if(!pres.count(f) && !pres.count(se)){
            pres.insert(se);
            pres.insert(f);
            string temp = to_string(f)+'*'+to_string(se);
            vis[temp] -= 1;    
        }
        i++;
     }
    //  for(auto s : pres){
    //     cout<<s<<" ";
    //  }
    //  cout<<endl;
    //  for(auto s : vis){
    //     cout<<s.ff<<" "<<s.ss<<endl;
   //  }
     i = 0;
     unordered_set<int>pres2;
     while(pres2.size()<n && i<n){
         int f = arr[i].ff;
         int se = arr[i].ss;
         string temp = to_string(f)+'*'+to_string(se);
         if((pres.count(f)||pres.count(se))  && (!pres2.count(f) && !pres2.count(se)) && (vis[temp]==1)){
            pres2.insert(f);
            pres2.insert(se);
         }
         i++;
     }
    //   for(auto s : pres2){
    //     cout<<s<<" ";
    //  }
    //  cout<<endl;
     if(pres.size()==n && pres2.size()==n){
        cout<<"YES\n";
     }
     else {
        cout<<"NO\n";
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
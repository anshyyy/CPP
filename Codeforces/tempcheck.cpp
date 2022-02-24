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
void solve(){ 
     unordered_map<string,ll>m;
     m["cheese"] = 0;
     m["peppers"] = 0;
     m["basil"] = 0;
     m["pineapple"] = 0;
     m["mushrooms"] = 0;
     m["tomatoes"] = 0;
    // for(auto x : m) cout<<x.first<<" "<<x.second<<endl;
     int test;
     cin>>test;
     for(int i = 0;i<test;i++){
         int l ;
         cin>>l;
         string likes;
         while(l--){
             cin>>likes;
             m[likes]++;
         }
         int d;
         cin>>d;
         string dislikes;
        while(d--){
            cin>>dislikes;
            m[dislikes]--;
        }
     }
     //for(auto x : m) cout<<x.first<<" "<<x.second<<endl;
     vector<string>ans;
     int ansn = 0;
     for(auto x :m){
         if(x.second>0){
             ans.push_back(x.first);
             ansn++;
         }
     }
     cout<<ansn<<endl;
     loop(i,0,ans.size()) cout<< ans[i]<<" ";
     cout<<endl;

}
int main() {
int t=1;
// cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
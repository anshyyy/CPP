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
     vector<int>arr(n);
     unordered_map<int,int>mp;
     loop(i,0,n){
         cin>>arr[i];
         mp[arr[i]]++;
     }
     int one=0;
     if(mp.count(1)){
         one = mp[1];
     }
     ll count = 0;
     for (auto x : mp)
     {
         if(x.ss>=2 && x.ff !=1){
             count+= x.ss%2 ? x.ss+1: x.ss;
         }
     }
     cout<<count<<endl;
     
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
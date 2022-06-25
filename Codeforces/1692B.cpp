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
     int asd = n;
     unordered_set<int>s;
     map<int,int>mp;
     loop(i,0,n){
         int x;
         cin>>x;
         s.insert(x);
         mp[x]++;
     }
     vector<int>arr;
     arr.assign(all(s));
     loop(i,0,arr.size()){
         n-=(mp[arr[i]]-1);
     }
     if((asd-n)%2) n-=1;
     cout<<n<<endl;
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
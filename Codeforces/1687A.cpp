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
     vector<int>arr(n);
     unordered_set<int>s;
     int z = 0;
     bool yes = false;
     loop(i,0,n){
        cin>>arr[i];
        if(arr[i]==0){
            z++;
            yes=true;
        }
        s.insert(arr[i]);
     }
     if(yes){
         cout<<(n-z)<<endl;
         return;
     }
     if(s.size()<n){
         cout<<n<<endl;
         return;
     }
     else cout<<n+1<<endl;
     
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
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
     vector<int>arr(n),res;
     loop(i,0,n)cin>>arr[i];
     int cnt = 0;
     for(int i = 0;i<n;i++){
         if(arr[i]>1){
             while(arr[i]>1){
                 cnt++;
                 res.push_back(1);
                 arr[i]--;
             }
         }
         else res.push_back(arr[i]);
     }
     loop(i,0,res.size())cout<<res[i]<<" ";
    cout<< (cnt%2 ?"errorgorn\n" : "maomao90\n");
}
int main() {
IOS
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
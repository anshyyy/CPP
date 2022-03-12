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
     int n;
     cin>>n;
     int freq[101] = {};
     vector<int>arr(n);
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
         freq[arr[i]]++;
     }
     int ans = 1;
     for (int i = 0; i < 101; i++)
     {
         if(freq[i]==0){
             ans = i;
             break;
         }
     }
     for (int i = 0; i < 101; i++)
     {
         if(freq[i]<=1){
             ans+=i;
             break;
         }
     }
     
     cout<<ans<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
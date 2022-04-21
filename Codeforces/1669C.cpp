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
     loop(i,0,n){
         cin>>arr[i];
     }
     if(all_of(all(arr),[&](int i){return i == arr[0];})){
         cout<<"YES\n";
         return;
     }
     vector<int>a1,a2;
     for(int i = 0;i<n;i+=2){
          a1.push_back(arr[i]);
     }
     for(int i = 1;i<n;i+=2) a2.push_back(arr[i]);
     for(int i = 0;i<a1.size()-1;i++){
         if(a1[i]!=a1[i+1] && a1[i]%2 != a1[i+1]%2){
             cout<<"NO\n";
             return;
         }
     }
    // loop(i,0,2)cout<<a2[i]<<" ";
      for(int i = 0;i<a2.size()-1;i++){
         if(a2[i]!=a2[i+1] && a2[i]%2 != a2[i+1]%2){
             cout<<"NO\n";
             return;
         }
     }

     cout<<"YES\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
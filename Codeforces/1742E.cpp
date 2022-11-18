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
void printarr(int arr[],int n){loop(i,0,n){cout<<arr[i]<<" ";}cout<<endl;}
void printvec(vector<int>&arr){loop(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<endl;}
void solve(){ 
     int n,q;
     cin>>n>>q;
     vector<ll>arr(n+1);
     vector<ll>pref(n+1,0);
     loop(i,1,n+1){
        cin>>arr[i];
        pref[i]=pref[i-1]+arr[i];
     }
     for(int i=1;i<=n;i++){
         arr[i]=max(arr[i-1],arr[i]);
     }
     //printvec(arr);
     ///printvec(pref);
     while(q--){
        ll k;cin>>k;
        ll p = upper_bound(arr.begin(),arr.end(),k)-arr.begin();
        cout<<pref[p-1]<<" ";
     }
     cout<<endl;
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
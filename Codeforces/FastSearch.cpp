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
ll lb(vector<ll>&arr,ll x){
    ll i =-1;
    ll j = arr.size();
    ll mid;
    while(i+1<j){
         mid = i + (j-i)/2;
         if(arr[mid]<=x){
              i = mid;
         }
         else{
             j = mid;
         }
    }
    return i+1;
}
ll ub(vector<ll>&arr,ll x){
    ll i =-1;
    ll j = arr.size();
    ll mid;
    while(i+1<j){
         mid = i + (j-i)/2;
         if(arr[mid]<x){
              i = mid;
         }
         else{
             j = mid;
         }
    }
    return j+1;
}

void solve(){ 
     ll n;
     cin>>n;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     sort(all(arr));
     ll q;cin>>q;
     while(q--){
         ll l,r;
         cin>>l>>r;
        ll x = ub(arr,l);
        ll y = lb(arr,r);
       // cout<<x<<" "<<y<<endl;
        cout<<(y-x)+1<<" ";
     }
     cout<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
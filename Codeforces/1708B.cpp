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
     ll n,l,r;
     cin>>n>>l>>r;
     vector<ll>arr;
     vector<ll>vis(r,0);

     if((r-l)<n-1){
        cout<<"NO\n";
        return;
     }
     if(r==l){
        if(n==1){
            cout<<"YES\n";
            cout<<l<<endl;
        }
        else {
            cout<<"NO\n";
        }
        return;
     }
    // ll i = 1;
    // while (n--)
    // {
    //   //  arr.push_back(__gcd(i,i*l));
    //     cout<<__gcd(i,i*l)<<" "<<i*l<<endl;;
    //     i++;
    // }  
    for(ll i = 1;i<=n;i++){
        ll x = l%(i);
        if(x==0) arr.push_back(l);
        else{
         ll fuck = i - l%i + l;
         if(fuck >= l && fuck<=r) 
             arr.push_back(fuck);
         else {
            cout<<"NO\n";
            return;
         }
        }
    }
    cout<<"YES\n";
    loop(i,0,arr.size()){
        cout<<arr[i]<<" ";
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
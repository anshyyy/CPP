#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
#define ld long double
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n,m;
     cin>>n>>m;
     vector<double>arr(n);
     loop(i,0,n)cin>>arr[i];
     
     if(m == 1){
       ll mm = n/2;
        if(n%2){
            cout<<arr[mm]<<endl;    
        } else {
            cout<<(double)(arr[mm]+arr[mm-1])/2<<endl;
        }
        return;
     }
     sort(all(arr));
     ll k  = n;
     double ans = 0;
     for(int i = n-1;i>=0;i++){
        if(m>1){
            ans += arr[i];
            m--;
            k--;
        }
     }
     if(k%2==1){
        ans+= double(arr[k/2]);
     }
     else{
        ans+= double((arr[k/2]+arr[(k/2)-1])/2);
     }
     cout<<ans<<endl;
}
int main() {
IOS;
int t=1;
cin>>t;
for(int i = 1;i<=t;i++){
    cout<<"Case #"<<i<<": ";
    solve();
}
     return 0;
}
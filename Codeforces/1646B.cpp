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
     ll n;
     cin>>n;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     sort(all(arr));
     bool f = true;
     ll i = 1;
     ll j = n-1;
     ll cnt1=1,cnt2=0;
     ll ff = arr[0],ss=0;
     while(i<j){
         ff+=arr[i++];
         cnt1++;
         ss+=arr[j--];
         cnt2++;
         if(ff<ss&&cnt1>cnt2){
             f = false;
             break;
         }
     }
     if(!f)cout<<"YES\n";
     else cout<<"NO\n";
     
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
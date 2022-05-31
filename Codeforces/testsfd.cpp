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
     ll n;cin>>n;
     vector<pair<ll,ll>>arr(n);
     vector<ll>push_out(n);
     for (int i = 0; i <n; i++)
     {
         cin>>arr[i].ff;
         arr[i].ss=i;
         push_out[i]=i+1;
     }
     bool notvalid = true;
     for (int i = 0; i < n; i++)
     {
          if(i>0 && i<n-1 && arr[i].ff!=arr[i+1].ff && arr[i].ff!=arr[i-1].ff){
              cout<<arr[i].ff<<" ";
             notvalid = false;
             break;
         }
         if(i==0 && arr[i].ff!=arr[i+1].ff){
             notvalid=false;
             break;
         }
         if(i==n-1 && arr[i].ff!=arr[i-1].ff){
             notvalid=false;
             break;
         }
        
         if(arr[i].ff==arr[i+1].ff){
             swap(push_out[arr[i].ss],push_out[arr[i+1].ss]);
         }
     }
     if(!notvalid)cout<<"-1\n";
     else{
         loop(i,0,n)cout<<push_out[i]<<" ";
         cout<<endl;
     }
     
     
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
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
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     ll cool = 0;
     if(n==3){
        if(max(arr[0],arr[2])-arr[1] >=0){
            cout<<max(arr[0],arr[2]) -arr[1] +1<<endl;
        } else {
            cout<<"0\n";
        }
        return;
     }

     for(int i=1;i<n-1;i++){
        if((max(arr[i-1],arr[i+1])-arr[i])<0){
            cool++;
        }
     }
     ll ans1 = 0,ans2 = 0;
     ll cool1=0,cool2=0;
     for(int i=1;i<n-1;i+=2){
        if((max(arr[i-1],arr[i+1])-arr[i])>=0){
            ans1+=max(arr[i-1],arr[i+1]) - arr[i] +1;
            cool1++;
        } else{
            cool1++;
        }
     }
     if(cool>=cool1) ans1=0;
     for(int i=2;i<n-1;i+=2){
        if(max(arr[i-1],arr[i+1])-arr[i]>=0){
            ans2+=max(arr[i-1],arr[i+1]) - arr[i] +1;
            cool2++;
        } else cool2++;
     }
    // cout<<cool<<" "<<cool1<<" "<<cool2<<endl;
     if(cool>=cool2) ans2=0;
    // cout<<ans1<<" "<<ans2<<endl;
     if(ans1==0||ans2==0){
        cout<<max(ans1,ans2)<<endl;
        return;
     }
     cout<<min(ans1,ans2)<<endl;
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
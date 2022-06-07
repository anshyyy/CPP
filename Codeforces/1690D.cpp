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
int miLen(ll tar, vector<ll>& nums) {
       int n=nums.size(),j=0,res=n+1;
        for(int i=0;i<n;i++){
        tar-=nums[i];
        while(tar<=0){
            res=min(res,i-j+1);
            tar+=nums[j++];
        }
        }
        return res%(n+1);
    }
void solve(){ 
     ll n,k;
     cin>>n>>k;
     string s;
     cin>>s;
     int pos[n+1];
     pos[0]=0;
     int ans = 0;
    for (int i = 0; i <n; i++)
    {
        if(s[i]=='W'){
            ans++;
        }
        pos[i+1]=ans;
    }
    loop(i,0,n+1)cout<<pos[i]<<" ";
    cout<<endl;
    int mini = INT_MAX;
    for (int i = 0; i <= n-k; i++)
    {
        mini = min(mini,pos[i+k]-pos[i]);
    }
    cout<<mini<<endl;     
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
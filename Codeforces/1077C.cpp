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
const ll INF = 1e6;
const ll MOD = 998244353;
using namespace std;
void printarr(int arr[],int n){loop(i,0,n){cout<<arr[i]<<" ";}cout<<endl;}
void printvec(vector<int>&arr){loop(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<endl;}
void solve(){ 
     ll n;cin>>n;
     vector<ll>arr(n),cnt(INF,0),ans;
     ll sum = 0;
     loop(i,0,n){
        cin>>arr[i];
        cnt[arr[i]]++;
        sum+=arr[i];
     }
     for(int i=0;i<n;i++){
        sum-=arr[i];
        cnt[arr[i]]--;
        if(sum%2==0 && (sum/2<=INF) &&cnt[sum/2]>0){
              ans.push_back(i);
        }
        sum+=arr[i];
        cnt[arr[i]]++;
     }
     cout<<ans.size()<<endl;
     loop(i,0,ans.size())
       cout<<ans[i]+1<<" ";
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
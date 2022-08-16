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
bool ck(ll a,ll b,ll k){
    return ((a+k)*b)%4==0;
}
void solve(){ 
     ll n,k;cin>>n>>k;
     vector<pair<int,int>>ans;
     for (int i = 1; i <= n; i+=2)
     {
        if(ck(i,i+1,k)){
            ans.push_back({i,i+1});
        }
        else if(ck(i+1,i,k)){
            ans.push_back({i+1,i});
        }
        else {
            cout<<"NO\n";
            return;
        }
     }
     cout<<"YES\n";
     for(auto i : ans){
        cout<<i.ff<<" "<<i.ss<<endl;
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
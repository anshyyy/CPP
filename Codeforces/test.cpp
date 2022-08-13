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

bool check(ll m,int n,vector<int>&arr){
    vector<int>temp = arr;
    unordered_map<ll,bool>mp;
    ll cnt = 0;int i =0;
    while(i<n && cnt<m){
        if(!mp.count(temp[i]))
        cnt++;
        mp[temp[i]]=true;
        temp[i]=0;
        i++;
    }
    while(i<n){
        if(mp.count(temp[i]))temp[i++]=0;
    }
    return is_sorted(all(temp));
}
void solve(){ 
     int n;cin>>n;
     vector<int>arr(n);
     ll ans = 0;
     set<ll>s;
     loop(i,0,n){
        cin>>arr[i];
        s.insert(arr[i]);
     }
     ll l = 0;
     ll h = s.size();
     while(l<=h){
        ll mid = l + (h-l)/2;
        if(check(mid,n,arr)){
            h = mid-1;
            ans=mid;
        } else l = mid+1;
     }
     cout<<ans<<endl;
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
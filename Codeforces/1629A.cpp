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
int binarySearch(vector<int>&arr, int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}
void solve(){ 
     int n,k;
     cin>>n>>k;
     vector<int>a(n),b(n);
     vector<pair<int,int>>arr;
     loop(i,0,n)cin>>a[i];
     loop(i,0,n)cin>>b[i];
     loop(i,0,n)arr.push_back(make_pair(a[i],b[i]));
     sort(all(arr));
     int ans=k;
     for (int i = 0; i < n; i++)
     {
       if(arr[i].first<=ans){
           ans+=arr[i].second;
       }
     }
     cout<<ans<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
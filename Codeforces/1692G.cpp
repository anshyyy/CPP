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
bool check(vector<int>&arr){
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>=arr[i+1]) return false;
    }
    return true;
}
void solve(){ 
     int n,k;cin>>n>>k;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     int ans =0;
     vector<int>temp(n);
     for (int i = 0; i < n-1; i++)
     {
         temp[i] = (arr[i]<2*arr[i+1]);
     }
     int i =0;
     int total = 0;
     while(i<k){
        total += temp[i++];
     }
     if(total==k)ans++;
     for (int i = k; i <n-1; i++)
     {
        total += temp[i];
        total -= temp[i-k];
        if(total==k) ans++;
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
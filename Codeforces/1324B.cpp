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
bool isPalin(vector<int>&arr,int l,int r){
    for(int i = l;i<r/2;i++) if(arr[i]!=arr[3-i-1]) return false;
    return true;
}
void solve(){ 
     int n;cin>>n;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     for (int i = 0; i <n-2; i++)
     {
         for (int j = i+2; j< n; j++)
         {
             if(arr[i]==arr[j]){
                 cout<<"YES\n";
                 return;
             }
         }
         
     }
     cout<<"NO\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
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
     int n;cin>>n;
     vector<int>arr(n),temp(n);
     int last = -1;
     int pp = 0;
     
     loop(i,0,n){
         cin>>arr[i];
         temp[i]=arr[i];
     }
     if(n==1){
         cout<<"-1\n";
         return;
     }
     sort(all(temp));
     vector<int>ans(n);
     for (int i = 0; i < n; i++)
     {
         if(arr[i]!=temp[i])ans[i]=temp[i];
         else{
             if(i<n-1)
                swap(temp[i],temp[i+1]);
             ans[i]=temp[i];
         }
     }
     if(ans[n-1]==arr[n-1])swap(ans[n-1],ans[n-2]);
     loop(i,0,n)cout<<ans[i]<<" ";
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
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
     ll n,k;
     cin>>n>>k;
     vector<ll>arr(n);
     loop(i,0,n)cin>>arr[i];
     sort(all(arr));
     vector<ll>pos;
     for (int i = 0; i < n; i++)
     {
         int j =i;
         while(j<n &&arr[i]==arr[j]){
             j++;
         }
         if((j-i)>=k)pos.push_back(arr[i]);
         j--;
         i=j;
     }
    //  loop(i,0,pos.size())cout<<pos[i]<<" ";
    //  cout<<endl;
     if(pos.empty()){
         cout<<"-1\n";
         return;
     }
     ll mm = 0,l = pos[0],r=pos[0];
     ll count = pos[0];
     for (int i = 1; i < pos.size(); i++)
     {
         if(pos[i]-1==pos[i-1]){
             if(pos[i]-count>mm){
                 l = count;
                 r = pos[i];
                 mm = pos[i]-count;
             }
         }
         else count = pos[i];
     }
   //  cout<<endl;
     cout<<l<<" "<<r<<endl;
     
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
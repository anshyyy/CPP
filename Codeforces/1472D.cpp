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
void solve(){ 
     ll n;
     cin>>n;
     vector<int>arr(n),odd,even;
     loop(i,0,n)cin>>arr[i];
     sort(allr(arr));
     ll ans = 0;
     for (int i = 0; i < n; i++)
     {
         if(i%2==0){// Alice turn
           if(arr[i]%2==0){
               ans+=arr[i];
           }
         } 
         else{ //BOB turn
            if(arr[i]%2==1){
                ans -=arr[i];
            }
         }
     }
     if(ans==0){
         cout<<"Tie\n";
     }
     else if(ans>0){
         cout<<"Alice\n";
     }
     else{
         cout<<"Bob\n";
     }
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
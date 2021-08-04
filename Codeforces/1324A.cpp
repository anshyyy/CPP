#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     int arr[n];
     loop(i,n)cin>>arr[i];
     int odd=0,even=0;
     for (int i = 0; i <n; i++)
     {
         if(arr[i]%2!=0){
            odd++;
         }
         else even++;
     }
    // cout<<odd<<" "<<even;
     if(odd<n&&even<n){
         cout<<"NO\n";
     }
     else cout<<"YES\n";
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
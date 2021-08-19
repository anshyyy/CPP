#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,sum=0,tf=0,ff=0,hn=0;
     cin>>n;
     vector<int> arr(n);
     loop(i,n)cin>>arr[i];
     for (int i = 0; i <n; i++)
     {
         if(arr[i]==25){
            tf++;
         }
          if(arr[i]==50) {
            ff++;
            tf--;
         }
         if(arr[i]==100){
          if(ff>0){
              tf--;
              ff--;
          }
          else tf=tf-3;
         }
         if(tf<0){
             cout<<"NO\n";
             return;
         }
     }
   if(tf>0) cout<<"YES\n";

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
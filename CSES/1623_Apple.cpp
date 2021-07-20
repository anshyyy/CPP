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
   int pre[n];
   pre[0]=arr[0];
   for (int i = 1; i <n; i++)
    pre[i]=pre[i-1]+arr[i];
   
   int sfe[n];
   sfe[n-1]=arr[n-1];
   for(int i=n-2;i>=0;i--)
   sfe[i]=sfe[i+1]+arr[i];

   int mini=INT_MAX;
   for (int i = 0; i <n-1; i++)
   {
        int diff=abs(pre[i]-sfe[i+1]);
        mini=min(mini,diff);
   }
   
   cout<<mini<<endl;
   
     
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
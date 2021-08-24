#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,m;
     cin>>n>>m;
     int arr[m];
     loop(i,m)cin>>arr[i];
     sort(arr,arr+m);
     int mini=0,num=arr[0],k=0;
     for (int i = 0; i <n; i++)
     {
         mini+=num;
         num--;
         if(num==0){
             num=arr[++k];
         }
     }
     sort(arr,arr+m,greater<int>());
     int maxi=0;
      for (int i = 0; i <n; i++)
      {
          maxi+=arr[0];
          arr[0]--;
          for (int j = 1; j <m;j++)
          {
             if(arr[j]<=arr[j-1]) break;
          
             swap(arr[j],arr[j-1]);
          }
      }
      cout<<maxi<<" "<<mini<<endl;
     

}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
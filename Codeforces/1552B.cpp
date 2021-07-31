#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     int arr[n][5];
     for (int i = 0; i < n; i++)
     {
         for (int j = 0; j < 5; j++)
         {
            cin>>arr[i][j];
         }
         
     }
     if(n==1){
         cout<<"1\n";
         return;
     }
     int maxi=0,res=-1;
     for (int i = 0; i < n; i++)
     {
         int num=0;
         for (int j = 0; j <5; j++)
         {
             if(arr[i][j]<arr[maxi][j]){
               num++;
             }
         }
         if(num>=3){
             maxi=i;
         }
         
     }
     int i;
     for (i = 0; i <n; i++)
     {
      int num=0;
      if(i!=maxi){
          loop(j,5){
              if(arr[i][j]<arr[maxi][j]){
                  num++;
              }
          }
          if(num>=3){
              res=-1;
              break;
          }
      }      
     }
     if(i==n){
         res=maxi+1;
     }
     cout<<res<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
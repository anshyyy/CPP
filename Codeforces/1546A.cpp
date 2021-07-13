#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     int arr[n+1],brr[n+1];
     int temp[n+1];
     for (int i = 1; i <n+1; i++)
     {
         cin>>arr[i];
     }
      for (int i = 1; i <n+1; i++)
     {
         cin>>brr[i];
     }
     for (int i = 1; i <n+1; i++)
     {
         temp[i]=abs(arr[i]-brr[i]);
     }
     int sum=0;
     for (int i = 1; i <n+1; i++)
     {
         sum+=temp[i];
     }
     if(sum%2){
         cout<<"-1\n";
         return;
     }
     else{
         cout<<sum/2<<endl;
          int i=1;int j=n;
          while(i<sum){
              if(temp[i]==0){
                  i++;
              }
              if (temp[j]==0){
                  j--;
              }
              if(temp[i]>=0&&temp[j]>=0){
                cout<<i<<" "<<j<<endl;
                temp[i]--;
                temp[j]--;
              }
          }   
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
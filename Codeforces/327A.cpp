#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std; 
int maxm(int arr[],int n){
    int maxi=INT_MIN,maxend=0;
    int s=0,end=0,start=0;
    for (int i = 1; i <n+1; i++)
    {
        maxend=maxend+arr[i];
        if(maxi<maxend){
            maxi=maxend;
            start=s;
            end=i;
        }
        if(maxend<0){
            maxend=0;
            s=i+1;
        }
      
    }
    // cout<<start<<" "<<end<<endl;
    return maxi;
}
void solve(){ 
     int n,sum=0;
     cin>>n;
     int arr[n+1],b[n+1];
     for1(i,n){
         cin>>arr[i];
         sum+=arr[i];
     }
     for (int i = 1; i < n+1; i++)
     {
         if(arr[i]==1){
             b[i]=-1;
         }
         else{
             b[i]=1;
         }
     }
     cout<<sum+maxm(b,n)<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,k;
     int sum=0,mini=-1,id=0,j;
     cin>>n>>k;
     int arr[n];
     loop(i,n){
         cin>>arr[i];
        if(i<k)sum+=arr[i];
        else if(i>=k){
            if(sum<=mini||mini==-1)
             j=i+1,mini=sum;
 
             sum=sum-arr[i-k]+arr[i];
        }
     }
 
    if(sum<=mini||mini==-1){
        j=n+1;
    }
    cout<<j-k;
    
 
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
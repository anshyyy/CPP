#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
bool is_sortedd(vector<int> &arr,int n){
    for (int i = 0; i <n-1; i++)
    {
        if(arr[i]<=arr[i+1])
           return false;
    }
    return true;
    
}
void solve(){ 
     int n,id,v=0;
     cin>>n;
     vector<int> arr(n);
     loop(i,n) cin>>arr[i];
     for (int i = 0; i <n-1; i++)
     {
         if(arr[i]>arr[i+1]){
             id=i;
             v++;
         }
     }
     if(arr[n-1]>arr[0]) id=n-1,v++;
     if(v==0) cout<<"0\n";
     else if(v>1) cout<<"-1\n";
     else cout<<n-1-id<<endl;
     

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
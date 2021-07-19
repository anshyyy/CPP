#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(i,a,n) for(int i=a;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
using namespace std;
void solve(){ 
     int n;cin>>n;
     int arr[n];
     loop(i,0,n)cin>>arr[i];

     sort(arr,arr+n);
     if(n==2){
         cout<<arr[0]<<" "<<arr[1]<<endl;
         return;
     }
     int pos=-1,mini=INT_MAX;
     for (int i = 1; i <n; i++)
     {
        if(mini>abs(arr[i]-arr[i-1])){
            pos=i;
            mini=abs(arr[i]-arr[i-1]);
        }
     }
     loop(i,pos,n) cout<<arr[i]<<" ";
     loop(i,0,pos)cout<<arr[i]<<" ";
     cout<<endl;
     

}
int main() {
    #ifdef LOCAL
      freopen("input_1.txt","r",stdin);
      freopen("output_1.txt","w",stdout);
     #endif
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
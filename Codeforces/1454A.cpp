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
     loop(i,n){
       arr[i]=i+1;
     }
     int temp[n];
     temp[0]= arr[n-1];
     for (int i = 0; i <n-1; i++)
     {
         temp[i+1]=arr[i];
     }
     loop(i,n)cout<<temp[i]<<" ";
     cout<<endl;
     

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     int n;cin>>n;
     int arr[n];
     loop(n)cin>>arr[i];
     int count=0;
     int maxi=0;
     for (int i = 0; i <n-1; i++)
     {
         if(arr[i]<=arr[i+1]){
             count++;
             maxi=max(count,maxi);
         }
         else count=0;
     }
     cout<<maxi+1<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,h1=0,count=-1;
     cin>>n;
    int arr[n];
    loop(i,n)cin>>arr[i];
    for (int i = 0; i <n; i++)
    {
        count++;
        count+=arr[i]-h1;
        count++;
        if(arr[i+1]<arr[i])
          {
              count+=arr[i]-arr[i+1];
              h1=arr[i+1];
          }
          else h1=arr[i];
    }
    cout<<count<<endl;
}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}
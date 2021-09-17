#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     vector<int>arr(n);
     loop(i,n)cin>>arr[i];
     int one=0,two=0;
     for (int i = 0; i < n; i++)
     {
         if(arr[i]==1)one++;
         else two++;
     }
     int i=0;
     if(two)
       arr[i++]=2;

    bool evone=(one%2==0)?true:false;
    if(evone)
      one--;

    for (int j = 0; j <one; j++)
    {
        arr[i++]=1;
    }
    for (int j = 0; j <two-1; j++)
    {
        arr[i++]=2;
    }
    if(evone)
    arr[i++]=1;
    
     loop(i,n)
     cout<<arr[i]<<" ";
     cout<<endl;
}
int main() {
int t=1;
while(t--){
 solve(); 
}
     return 0;
}
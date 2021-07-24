#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     int arr[n],brr[n];
     for (int i = 0; i <n; i++)
     {
         cin>>arr[i]>>brr[i];
     }
     int count=0;
     for (int i = 0; i <n; i++)
     {
         for (int j = 0; j < n; j++)
         {
             if(arr[i]==brr[j])count++;
         }
         
     }
     
     cout<<count<<endl;

}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
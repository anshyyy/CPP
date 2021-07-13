#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     int arr[n];
     loop(n)cin>>arr[i];
     int one=0,two=0,ans=0,flag=0;
     if(arr[0]==1) one++;
     else two++;
     for(int i=1;i<n;i++){
         if(arr[i-1]!=arr[i]) flag++;
         if(flag==2){
             ans=max(ans,min(one,two));
             if(arr[i]==1)one =0;
             else two=0;
            flag=1;
         }
         if(arr[i]==1) one++;
         else two++;
     }
     ans=max(ans,min(one,two));
     cout<<2*ans<<endl;
}
int main() {
IOS
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
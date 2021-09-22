#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     ll n,first=0,second=0;
     cin>>n;
     vector<ll>arr(n),ff(n),ss(n);
     loop(i,n){
         cin>>arr[i];
        if(arr[i]>0){
            first+=arr[i];
            ff.push_back(arr[i]);
        }
        else{ 
            second+=arr[i];
            ss.push_back(arr[i]*(-1));
        }
     }
     ll last=arr[n-1];
     if(first>abs(second)){
         cout<<"first\n";
     }
     else if(first<abs(second)){
         cout<<"second\n";
     }
     else{
         if(ff==ss){
             if(last>0){
                 cout<<"first";
             }
             else{
                 cout<<"second\n";
             }
         }
         else{
             auto it =ff.begin();
             auto tt =ss.begin();
             while(it!=ff.end()||tt!=ss.end()){
                 if(*it==*tt){
                     it++;
                     tt++;
                 }
                 else{
                     if(*it>*tt){
                         cout<<"first\n";
                     }
                     else{
                         cout<<"second";
                     }
                     break;
                 }
             }
         }
     }
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
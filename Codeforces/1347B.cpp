#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,a=0,b=0;cin>>n;
     int arr[n];
     
     for (int i = 0; i <n; i++) cin>>arr[i];
     for (int i = 0; i <n; i++)
     {
         if(arr[i]%2!=i%2){
             if(i%2==0) a++;
             else b++;
         }
     }
     if(a!=b)cout<<"-1\n";
     else  cout<<a<<endl;
     

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
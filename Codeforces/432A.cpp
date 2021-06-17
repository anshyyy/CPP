#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
   int n,k;
   cin>>n>>k;
   int count=0;
   int arr[n];
   loop(n) cin>>arr[i];
   for(int i=0;i<n;i++){
       if(5-arr[i]>=k)
       count++;
   }  
   cout<<count/3<<endl;

}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
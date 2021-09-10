#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,s,t;
     cin>>n>>s>>t;
     vector<int>arr(n+1);
     for1(i,n)cin>>arr[i];
     int step=0;
     while(s!=t&&arr[s]!=0){
         int temp=arr[s];
         arr[s]=0;
         s=temp;
         step++;
     }
    if(s==t)cout<<step<<endl;
    else cout<<"-1\n";

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
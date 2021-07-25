#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,k,count=0,mcount=0;
     bool flag=false;
     cin>>n>>k;
     int arr[n];
     loop(i,n)cin>>arr[i];

     for (int i = 0; i <n; i++)
     {
         count+=arr[i];
         int r=min(count,8);
         count-=r;
         k-=r;
         mcount++;
         if(k<=0) break;
     }
     if(k>0)cout<<"-1\n";
    else cout<<mcount<<endl;
     

}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
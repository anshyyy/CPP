#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,count=0;
     cin>>n;
     pair<int,int>arr[n];
     int ckc[200]={};
     loop(i,n){
        int a,b;
        cin>>a>>b;
        arr[i]=make_pair(b,a);

     }
     
     for (int i = 0; i <n; i++)
     {
         for(int j=0;j<n;j++){
             if(ckc[j]==1)continue;
             if(j==i)continue;
             if(arr[j].second==arr[i].first ){
                   ckc[j]=1; 
           }
         }
     }
     for (int i = 0; i <n; i++)
     {
         if(ckc[i]==0)count++;
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
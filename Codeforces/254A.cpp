#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
     int n;
     cin>>n;
     vector<pair<int,int>> x(2*n);
     for (int i = 0; i <n*2; i++)
     {
         cin>>x[i].first;
         x[i].second=i+1;
     }
     sort(x.begin(),x.end());
     bool flag=true;
     for (int i = 0; i <n*2; i+=2)
     {
         if(x[i].first!=x[i+1].first){
             flag=false;
             break;
         }
     }
     if(flag){
         for (int i = 0; i <n*2; i+=2)
         {
             cout<<x[i].second<<" "<<x[i+1].second<<endl;
         }
         
     }
     else{
         cout<<-1;
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
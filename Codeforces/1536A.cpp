#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin >> n;
     bool flag =false;
     for (int i = 1; i <=n; i++)
     {
         int x;
         cin>>x;
         if(x<0) flag=true;
     }
     if(flag) cout<<"NO\n";
     else{
         cout<<"YES\n";
         cout<<101<<endl;
         for (int i = 0; i <101; i++)
         {
             cout<<i<<" ";
         }
         cout<<"\n";
         
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
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,z=0,f=0;
     cin>>n;
     for (int i = 0; i <n; i++)
     {
        int x;
        cin>>x;
        if(x==0) z++;
        else f++; 
     }
     if(z==0) cout<<"-1\n";
     else if(f<9) cout<<"0\n";
     else{
         f-=f%9;
         loop(i,f)cout<<5;
         loop(i,z)cout<<0;
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
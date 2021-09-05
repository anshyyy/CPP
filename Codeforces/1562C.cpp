#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     string s;
     cin>>s;
     bool flag =false;
     for (int i = 0; i <n; i++)
     {
         if(s[i]=='0'){
             flag=true;
             if(i>=n/2){
                 cout<<1<<" "<<i+1<<" "<<1<<" "<<i<<endl; 
                 break;
             }
             else{
                cout<<i+2<<" "<<n<<" "<<i+1<<" "<<n<<endl;
                break;
             }
         }
     }
     if(!flag){
         cout<<1<<" "<<n-1<<" "<<2<<" "<<n<<endl;
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
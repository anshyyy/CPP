#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
   ll d;
   cin>>d;
   if(d==0){
       cout<<"Y "<<0.0<<" "<<0.0<<endl;
       return;
   } 
   if(d<4){
       cout<<"N\n";
       return;
   }
   long double D= sqrt(d*ll(d-4));
   long double x=(d+D)/2.0;
   long double y=(d-D)/2.0;
   cout << fixed << setprecision(9)<<"Y "<<x<<" "<<y<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
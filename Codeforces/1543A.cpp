#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     ll a,b,g1,g2,g3;
     cin>>a>>b;
     if(a-b==0){
         cout<<"0 0\n";
     }
    //  else if(a+1==b||b+1==a){
    //      cout<<"1 0\n";
    //  }
    //  else if(2*a==b||2*b==a){
    //      cout<<__gcd(a,b)<<" "<<"0\n";
    //  }
    //  else{
    //   g1=__gcd(a,b);
    //  while (true)
    //  {
    //      a--;
    //      if(a<0) break;
    //      b--;
    //      if(b<0) break;
    //       g2=__gcd(a,b);
    //      // cout<<g2<<"\t";
    //      if(g2>g1)break;
    //  }
    // // //1 2 cout<<endl;
    // //  while (true)
    // //  {
    // //      a++;
    // //      b++;
    // //      g3=__gcd(a,b);
    // //     //  cout<<g3<<"\t";
    // //      if(g3>g1) break;
    // //  }
    //  cout<<max(g1,g2)<<" "<<g1<<endl;
    else{
        ll d=abs(a-b);
        cout<<d<<" "<<min(a%d,d-a%d)<<endl;
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
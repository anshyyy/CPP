#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
int gcd(int a,int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve(){ 
     int n;
     cin>>n;
    //  int maxi=0;
    //  for(int j=1;j<=n;j++){
    //  for (int i = 1; i <=n; i++)
    //  {
    //      int a=gcd(i,j);
    //      if(a>maxi) maxi=a;
    //     // maxi=max(a,maxi);
    //  }
    //  }
     cout<<n/2<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
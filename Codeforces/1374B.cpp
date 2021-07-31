#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
   int n;
   cin>>n;
   int count2=0,count3=0;
   while(n%2==0){
     n/=2;
     count2++;
   }
   while (n%3==0)
   {
     n/=3;
     count3++;
   }
   if(n==1&&count2<=count3){
     cout<<2*count3-count2<<endl;
   }
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
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     string x;
     cin>>x;
     int n= x.size();
     int ans=0;
     if(x[n-1]=='1'){
         if(n==4){
             cout<<"10\n";
         }
         else if(n==3){
             cout<<"6\n";
         }
         else if (n==2){
             cout<<"3\n";
         }
         else{
             cout<<"1\n";
         }
     }
     else if( x[n-1]=='2'){
         ans+= 10;
         if(n==4){
             ans+=10;
             cout<<ans<<endl;
         }
         else if(n==3){
             ans+=6;
             cout<<ans<<endl;;
         }
         else if (n==2){
             ans+=3;
             cout<<ans<<endl;
         }
         else{
             ans+=1;
             cout<<ans<<endl;
         }
     }
      else if( x[n-1]=='3'){
         ans+= 20;
          if(n==4){
             ans+=10;
             cout<<ans<<endl;
         }
         else if(n==3){
             ans+=6;
             cout<<ans<<endl;;
         }
         else if (n==2){
             ans+=3;
             cout<<ans<<endl;
         }
         else{
             ans+=1;
             cout<<ans<<endl;
         }
     }
      else if( x[n-1]=='4'){
         ans+= 30;
         if(n==4){
             ans+=10;
             cout<<ans<<endl;
         }
         else if(n==3){
             ans+=6;
             cout<<ans<<endl;;
         }
         else if (n==2){
             ans+=3;
             cout<<ans<<endl;
         }
         else{
             ans+=1;
             cout<<ans<<endl;
         }
     }
      else if( x[n-1]=='5'){
         ans+= 40;
         if(n==4){
             ans+=10;
             cout<<ans<<endl;
         }
         else if(n==3){
             ans+=6;
             cout<<ans<<endl;;
         }
         else if (n==2){
             ans+=3;
             cout<<ans<<endl;
         }
         else{
             ans+=1;
             cout<<ans<<endl;
         }
     }
      else if( x[n-1]=='6'){
         ans+= 50;
         if(n==4){
             ans+=10;
             cout<<ans<<endl;
         }
         else if(n==3){
             ans+=6;
             cout<<ans<<endl;;
         }
         else if (n==2){
             ans+=3;
             cout<<ans<<endl;
         }
         else{
             ans+=1;
             cout<<ans<<endl;
         }
     }
      else if( x[n-1]=='6'){
         ans+= 50;
         if(n==4){
             ans+=10;
             cout<<ans<<endl;
         }
         else if(n==3){
             ans+=6;
             cout<<ans<<endl;;
         }
         else if (n==2){
             ans+=3;
             cout<<ans<<endl;
         }
         else{
             ans+=1;
             cout<<ans<<endl;
         }
     }
      else if( x[n-1]=='7'){
         ans+= 60;
         if(n==4){
             ans+=10;
             cout<<ans<<endl;
         }
         else if(n==3){
             ans+=6;
             cout<<ans<<endl;;
         }
         else if (n==2){
             ans+=3;
             cout<<ans<<endl;
         }
         else{
             ans+=1;
             cout<<ans<<endl;
         }
     }
      else if( x[n-1]=='8'){
         ans+= 70;
          if(n==4){
             ans+=10;
             cout<<ans<<endl;
         }
         else if(n==3){
             ans+=6;
             cout<<ans<<endl;;
         }
         else if (n==2){
             ans+=3;
             cout<<ans<<endl;
         }
         else{
             ans+=1;
             cout<<ans<<endl;
         }
     }
      else if( x[n-1]=='9'){
         ans+= 80;
         if(n==4){
             ans+=10;
             cout<<ans<<endl;
         }
         else if(n==3){
             ans+=6;
             cout<<ans<<endl;;
         }
         else if (n==2){
             ans+=3;
             cout<<ans<<endl;
         }
         else{
             ans+=1;
             cout<<ans<<endl;
         }
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
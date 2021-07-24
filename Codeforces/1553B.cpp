#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){
    int a=0; 
    string s,t;
    cin>>s>>t;
   for (int i = 0; i <s.size(); i++)
   {
       if(t[0]==s[i]){ 
           a=i;
           break;
       }
   }
   bool flag=true;
   int l=s.size()-1;
   for ( int i = 1; i <t.size()-1; i++)
   {
       if(t[i]==s[a+1]){
           a++;
           l--;
         //cout<<l<<" +";
           if(l<=0){
               flag=false;
           }
       }
       else if(t[i]==s[a-1]){
           a--;
           l--;
           //cout<<l<<" -"<<endl;;
           if(l<=0){
               flag=false;
           }
       }
       else{
           flag=false;
           break;
       }
   }   
    flag?cout<<"YES\n":cout<<"NO\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
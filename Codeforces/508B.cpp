#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     int n=s.size()-1;
     int x=n;
     for (int i = 0; i <s.size(); i++)
     {
       
         if((int(s[i]))%2==0){
                x=i;
               if(s[n]>s[i])
                  break;
             }
         }
     if(n==x){
         cout<<"-1\n";
         return;
     }
       swap(s[x],s[n]);
       cout<<s<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     int n=s.size();
     int ans=0;
     for (int i = 0; i <n; i++)
     {
         if(s[i]=='w') 
         ans++;
         else{
             int j=i;
             while(j<n&&s[i]=='v'&&s[j]=='v'){
                 j++;
             }
             ans+=(j-i)/2;
             j--;
             i=j;
             }
         }
     cout<<ans<<endl;
     
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
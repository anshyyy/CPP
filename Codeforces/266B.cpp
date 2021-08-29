#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n,x;
     cin>>n>>x;
     string s;
     cin>>s;
     while(x--){
     for (int i = 0; i <n; i++)
     {
         if (s[i]=='B'&&s[i+1]=='G')
         {
             swap(s[i],s[i+1]);
             i++;
         }
      }  
 }
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
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void generateParenthesis(int n, int open, int close, string s, vector<string> &ans){
    if(open==n && close==n){
        ans.push_back(s);
        return;
    } 
     
    if(open<n){
        generateParenthesis(n, open+1, close, s+"(", ans);
    }
  
    if(close<open){
        generateParenthesis(n, open, close+1, s+")", ans);
    }
       
}
void solve(){ 
 int n;
 cin>>n;
 for (int i = 1; i <= n; i++)
 {
     ll xx=n;
     ll yy=n;
     while(xx>0){
         for (int j = 1; j <= i&&xx>0; j++)
         {
             cout<<"(";
             xx--;
         }
         cout<<")";
         yy--;
     }
     for (int j= 1; j <=yy; j++)
     {
         cout<<")";
     }
     cout<<"\n";
     
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
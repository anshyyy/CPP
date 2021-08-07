#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     string s,t;
     cin>>s>>t;
     int count=0,id=0;
     char a,b;
     bool flag=true;
     if(s.size()!=t.size()){
         cout<<"NO\n";
         return;
     }
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){
            count++;
             a=s[i];
             b=t[i];
            id=i;
            break;
        }
    }
    cout<<id;
    for (int i = id+1; i <s.size(); i++)
    {
        if(s[i]!=t[i]){
            count++;
            if(a!=t[i]||b!=s[i]){
                flag=false;
            }
        }
    }
    
    if(count==2&&flag){
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
    }
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
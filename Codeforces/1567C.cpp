#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     string s,s1,s2;
     cin>>s;
     for (int i = 0; i < s.size(); i++)
     {
         if(i%2==0) s1+=s[i];
         else if(i%2==1) s2+=s[i];
     }
     if(s2.empty()){
         cout<<stoi(s1)-1<<endl;
     }
     else {
         cout<<(stoi(s1)+1)*(stoi(s2)+1)-2<<endl;
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
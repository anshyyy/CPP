#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     string s,t;
     cin>>s>>t;
     int n=s.size(),m=t.size();
     bool flag=false;
     vector<int> count(30,0);
     for (int i = 0,j=0; i <n; i++)
     {
         if(j<m&&s[i]==t[j]) ++j;
         if(j==m) flag =true;
     }
     for(int i=0;i<n;i++) count[s[i]-'a']++;
    // loop(i,n)cout<<count[i]<<" ";
    // cout<<endl;
     for (int i = 0; i <m; i++) count[t[i]-'a']--;
    // loop(i,n)cout<<count[i]<<" ";
     bool f=true,f2=true;
     for (int i = 0; i < 26; i++)
     {
         f=f&(count[i]==0);
         f2=f2&(count[i]>=0);
     }
    
     if(flag)cout<<"automaton\n";
     else if(f) cout<<"array\n";
     else if(f2)cout<<"both\n";
     else cout<<"need tree\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
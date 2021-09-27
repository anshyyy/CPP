#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     string x;
     cin>>x>>n;
     vector<string>arr(n);
     for(auto &s : arr) cin>>s;
     vector<int>pos(26);
     for (int i = 0; i <26; i++)
     {
        pos[x[i]-'a']=i;
     }
     sort(arr.begin(),arr.end(),[&](const auto &a,const auto &b){
         int len = min(a.size(),b.size());
         for (int  i = 0; i <len; i++)
         {
             if(a[i]!=b[i]) return pos[a[i]-'a']<pos[b[i]-'a'];
         }
         return a.size()<b.size();
         
     });
     for(const auto &s : arr) cout<<s<<endl;
     

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
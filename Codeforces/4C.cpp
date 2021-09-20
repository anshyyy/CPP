#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     string s;
     unordered_map<string,int>mp;
     while(n--){
         cin>>s;
         if(mp.count(s)==0){
             cout<<"OK\n";
             mp[s]=1;
         }
         else{
             cout<<s<<mp[s]<<endl;
             mp[s]++;
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
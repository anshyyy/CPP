#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     int n;cin>>n;
     string s,t;cin>>s>>t;
     string s1,s2;
     loop(i,0,n){
         if(s[i]!='b')
           s1.push_back(s[i]);
         if(t[i]!='b')
           s2.push_back(t[i]);  
     }
     if(s1!=s2){
           cout<<"NO\n";
           return;
     }
     vector<int>cid1,cid2;
     loop(i,0,n){
         if(s[i]=='c')cid1.push_back(i);
         if(t[i]=='c')cid2.push_back(i);
     }
     loop(i,0,cid1.size()){
         if(cid1[i]<cid2[i]){
             cout<<"NO\n";
             return;
         }
     }
     cid1.clear();
     cid2.clear();
     loop(i,0,n){
         if(s[i]=='a')cid1.push_back(i);
         if(t[i]=='a')cid2.push_back(i);
     }
     loop(i,0,cid1.size()){
         if(cid1[i]>cid2[i]){
             cout<<"NO\n";
             return;
         }
     }
     cout<<"YES\n";
}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
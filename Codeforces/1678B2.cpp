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
int operation(string &s){
      ll op = 0;
     ll z = 0,o=0;
     for(auto i : s)
     {
         if(i=='1'){
               if(z%2){
                   o++;
                   z=0;
                   op++;
               }
               o++;
         }
         else{
             if(o%2){
                 z++;
                 o=0;
                 op++;
             }
             z++;
         }
     }
    return op;
}
void solve(){ 
     int n;cin>>n;
     vector<int>v;
     string s;cin>>s;
     int oper = operation(s);
     for (int i = 0; i < n; i++)
     {
         int j = i;
         while(j<n && s[i]==s[j]){
             j++;
         }
         v.push_back(j-i);
         j--;
         i=j;
     }
     if(oper==0){
         cout<<"0"<<" "<<v.size()<<endl;
         return;
     }
     for (int i = 0; i < n-1; i++)
     {
         if(s[i]!=s[i+1]){
             
         }
     }
     

     
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
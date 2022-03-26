#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     string s1,s2;
     cin>>s1>>s2;
     int h = 0;
     for (int i = 0; i < s1.size(); i++)
     {
         for (int j = s1.size()-1; j >= i; j--)
         {
              if(s2.find(s1.substr(i,j-i+1))!=string::npos){
                h = max(h,j-i+1);
              }
         }
     }
     cout<<s1.size()+s2.size()-2*h<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
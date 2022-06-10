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
     unordered_map<char,int>cnt;
     string s,t;
     cin>>s>>t;
     for (int i = 0; i < s.size(); i++)
     {
         cnt[s[i]]++;
     }
     int yay = 0;
     for(int i = 0;i<t.size();i++){
         if(cnt[t[i]]>0){
             yay++;
             cnt[t[i]]--;
         }
     }
     int whoops = 0;
     for (int i = 0; i < s.size(); i++)
     {
         char c = t[i];
         c = isupper(c)?c+32:c-32;
         if(cnt[c]>0){
             whoops++;
             cnt[c]--;
         }
     }
     cout<<yay<<" "<<whoops<<endl;
     
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
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
     int n;
     cin>>n;
     string s;cin>>s;
     int b3 = s.find("BBB");
     int r3 = s.find("RRR");
     if(b3!=-1||r3!=-1){
         cout<<"NO\n";
         return;
     }
     if(n==1){
         cout<<"NO\n";
         return;
     }
     if(n==2 and (s[0]=='W' or s[1]=='W')){
         cout<<"NO\n";
         return;
     }
     if(s[0]=='W' and s[1]=='R'){
            s[0]='B';
     }
     if(s[0]=='W' and s[1]=='B'){
            s[0]='R';
     }
     if(s[n-1]=='W' and s[n-2]=='R'){
            s[n-1]='B';
     }
      if(s[n-1]=='W' and s[n-2]=='B'){
            s[n-1]='R';
     }
     for (int i = 1; i <n; i++)
     {
         if(s[i]=='W'){
             if(s[i-1]=='B'){
                 s[i]='R';
             }
             if(s[i-1]=='R'){
                 s[i]='B';
             }
         }
     }
     cout<<s<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
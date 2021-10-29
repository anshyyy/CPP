#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     int n = s.size();
     int ab =0,ba=0;
     for(int i = 0;i<n-1;i++){
         if(s[i]=='a'&&s[i+1]=='b'){
            ab++;
         }
         if(s[i]=='b'&&s[i+1]=='a'){
            ab--;
         }
     }
     if(ab==0){
         cout<<s<<endl;
         return;
     }
     if(ab==1){
            for (int i = 0; i <n-1; i++)
            {
               cout<<s[i];
            }
        cout<<"a"<<endl;
     }
     else{
    
            for (int i = 0; i <n-1; i++)
            {
                cout<<s[i];
            }
        cout<<"b"<<endl;
     }
}
int main() {
IOS
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
bool ckc(string s){
    for (int i = 0; i <s.size(); i++)
    {
        if(s[i]!=s[i+1]){
            return false;
        }
    }
    return true;
    
}
void solve(){ 
     int n;cin>>n;
     string s,t;
     cin>>t>>s;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='1'){
            if(t[i]=='0'){
                count++;
            }
            else if(i>0&&t[i-1]=='1'){
                count++;
                t[i-1]='0';
            }
            else if(i<n&&t[i+1]=='1'){
                count++;
                t[i+1]='0';
            }

        }
    }
    cout<<count<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     string s;
     cin>>s;
     int l=0,r=s.size()-1;
    for (int i = r; i >=0; i--)
    {
        char c='a'+i;
        if(s[l]==c) l++;
        else if(s[r]==c) r--;
        else{
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
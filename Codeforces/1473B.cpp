#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
string ckc(string s,int n){
    string r=" ";
    while (n--)
    {
        r+=s;
    }
    return r;
    
}
void solve(){
    string s1,s2;
    cin>>s1>>s2;
    int x=s1.size();
    int y=s2.size();
    ll lcm= (x*y)/__gcd(x,y);
     if (ckc(s1,lcm/x)==ckc(s2,lcm/y))
     {
         cout<<ckc(s1,lcm/x)<<endl;
     }
     else cout<<"-1\n";
     
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
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
bool ispalin(string s){
    int n = s.size();
    for(int i=0;i<n/2;i++){
        if(s[i] != s[n-i-1]) return false;
    }
    return true;
}
void solve(){ 
     int n;cin>>n;
     string s;cin>>s;
     for (int i = 0; i < n/2; i++)
     {
        if(s[i]!=s[n-1-i]){
            if(s[i]<s[n-1-i]){
                cout<<"No\n";
                return;
            }
            else{
                s[n-1-i] = 'B';
                s[n-2-i] = 'A';
            }
        }
       // cout<<s<<endl;
     }
     //cout<<s<<endl;
     ispalin(s)?cout<<"Yes\n":cout<<"No\n";
     
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
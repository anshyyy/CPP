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
void solve()
{ 
  int num=0,Lcase=0,Ucase=0;
  string s;
 cin>>s;
 for(int i=0;i<s.size();i++)
 { if(s[i] >= 'A' && s[i] <= 'Z')
     {
         Ucase=1;
     }
     
    if(s[i] >= 'a' && s[i] <= 'z')
    {
        Lcase=1;
    }
    if(s[i] >= 48  && s[i] <= 57)
    {
        num=1;
    }
 }
 if(num+Lcase+Ucase == 3)
    {
        cout<<"YES"<<"\n";
    }
else
   cout<<"NO"<<"\n";
    
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
	//code
	return 0;
}
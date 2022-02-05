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
bool isPalindrome(string S)
{
    ll n = S.size();
    for (ll i = 0; i < n / 2; i++) {
        if (S[i] != S[n - i - 1]) {
            return false;
        }
    }
    return true;
}
void solve(){ 
     string s;
     cin>>s;
     if(isPalindrome(s)){
         cout<<"Yes\n";
         return;
     }
     ll a = 0;
     for (ll i = ((ll)s.size())-1; i >=0; i--)
     {
         if(s[i]=='a'){
             a++;
         }
         else break;
     }
     string res = "";
     while(a--){
         res += 'a';
     }
      ll i = 0;
      while(i<ll(s.size())){
          res+=s[i++];
      }
      if(isPalindrome(res)){
          cout<<"Yes\n";
      }
      else cout<<"No\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
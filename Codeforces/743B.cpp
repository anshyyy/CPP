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
ll setBits(ll n)
{
    // Store the number of setbits
    int count = 0;
 
    while (n > 0) {
 
        // Update the value of n
        n = n & (n - 1);
 
        // Update the count
        count++;
    }
 
    // Return the total count
    return count;
}
void findNthTerm(ll N)
{
    // Store the result
    ll x = setBits(N ^ (N - 1));
 
    // Print the result
    cout << x<<endl;
}
void solve(){ 
     ll n,k;
     cin>>n>>k;
     findNthTerm(k);
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
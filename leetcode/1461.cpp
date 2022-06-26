#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define loop(i, a, n) for (int i = a; i < n; i++)
#define all(v) (v).begin(), (v).end()
#define all1(v) (v).begin() + 1, (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define allr1(v) (v).rbegin() + 1, (v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
using namespace std;
bool hasAllCodes(string s, int k)
{
    // ll ckc = stoll(s,nullptr,2);
    // if(ckc<k){return false;}
    // if(s.size()==1&& k>1){
    //     return false;
    // }
    map<ll,string>mp;
    for (int i = 0; i <= s.length() - k; i++)
    {
        string x = s.substr(i, k);
        ll num = stoll(x,nullptr,2);
        mp[num]=x;
    }
//     for(auto xx : mp){
//         cout<<xx.ff<<" "<<xx.ss<<endl;
//     }
//    // int l = k<=2?0:pow(2,k-1);
//     int r = pow(2,k);
//     //cout<<l<<" "<<r<<endl;
//     for(int i =0;i<r;i++){
//         if(mp.find(i)==mp.end()){
//             return false;
//         }
//     }
//     return true;
return mp.size()==(1<<k);
}
void solve()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    cout << hasAllCodes(s, k) << endl;
}
int main()
{
    IOS;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
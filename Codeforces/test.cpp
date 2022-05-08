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
    set<int> sp;
    vector<ll> pos; 
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll k;
    cin >> k;
    
    
    for (int i = 0; i < k; ++i)
    {
        char c;
        cin >> c;
        sp.insert(c);
    }
    for (int i = 0; i < n; i++)
    {
        if (sp.count(s[i]))
        {
            s[i] = 97;
        }
        else
        {
            s[i] = 98;
        }
    }
    for (int i = 0; i < n; ++i)
        if (s[i] == 97)
            pos.push_back(i);
    ll result = 0;
    if (pos.size() == 1)
    {
        cout << pos[0] << endl;
        return;
    }
        for (int i = 1; i < pos.size(); ++i)
        {
            result = max((pos[i] - pos[i - 1]), result);
        }
        cout << result << endl;
    
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
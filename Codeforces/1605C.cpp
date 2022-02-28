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
ll check(string str1,string str2)
{
    if(str2.find(str1)!=string::npos)
    {
        return 1;
    }
    return 0;
}
void solve()
{
    ll n;
    cin>>n;
    string str;
    cin>>str;
    vector<string> vec={"aa","aba","aca","abca","acba","abbacca","accabba"};
    if(check(vec[0],str))
    {
        cout<<2<<"\n";
        return;
    }
    if(check(vec[1],str))
    {
        cout<<3<<"\n";
        return;
    }
    if(check(vec[2],str))
    {
        cout<<3<<"\n";
        return;
    }
    if(check(vec[3],str))
    {
        cout<<4<<"\n";
        return;
    }
    if(check(vec[4],str))
    {
        cout<<4<<"\n";
        return;
    }
    if(check(vec[5],str))
    {
        cout<<7<<"\n";
        return;
    }
    if(check(vec[6],str))
    {
        cout<<7<<"\n";
        return;
    }
    cout<<"-1\n";
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
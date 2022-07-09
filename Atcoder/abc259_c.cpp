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
     string s,t;
     cin>>s>>t;
     if(s==t){
        cout<<"Yes\n";
        return;
     }
     ll sn = s.size();
     ll tn = t.size();
     vector<pair<char,ll>>pos_s,pos_t;
     for(ll i =0;i<sn;i++){
        ll j = i;
        while(j<sn && s[i]==s[j])j++;
        pos_s.push_back({s[i],j-i});
        j--;
        i=j;
     }
     for(ll i = 0;i<tn;i++){
        ll j = i;
        while(j<tn && t[i]==t[j])j++;
        pos_t.push_back({t[i],j-i});
        j--;
        i = j;
     }

    //  (pos_s==pos_t)?cout<<"Yes\n":cout<<"No\n";
    if(pos_s.size()!=pos_t.size()){
        cout<<"No\n";
        return;
    }
    for(ll i =0;i<(ll)pos_s.size();i++){
        if(pos_s[i].ff != pos_t[i].ff){
            cout<<"No\n";
            return;
        }
        if(pos_s[i].ff==pos_t[i].ff ){
            ll x = pos_s[i].ss;
            ll y = pos_t[i].ss;
            if(x>=2 && y>=2){
                
            }
            else if(x==y){

            }
            else{
                cout<<"No\n";
                return;
            }
        }
    }
    cout<<"Yes\n";

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
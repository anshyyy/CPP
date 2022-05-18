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
    string s;
    cin>>s;
    ll n = s.size();
    stack<pair<char,ll>>st;
    for(int i = 0;i<n;i++){
        if(s[i]=='('){
            st.push({s[i],i});
        }
        else{
            if(!st.empty() && st.top().ff=='('){
                st.pop();
            }
            else{
                st.push({s[i],i});
            }
        }
    }
    ll ans = st.size();
    vector<int>vec;
    while(!st.empty()){
        vec.push_back(st.top().ss);
        st.pop();
    }
    vec.push_back(0);
    vec.push_back(s.size()-1);
    sort(all(vec));
    if(ans==0){
        cout<<"0 1\n";
        return;
    }
    int res = 0;
    for (int i = 1; i <vec.size(); i++)
    {
        if(vec[i]-vec[i-1]>1) res++;
    }
    cout<<res<<" "<<ans<<endl;
    
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
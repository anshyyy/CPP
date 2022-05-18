#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t,n;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        n = s.length();

        stack<pair<char,ll>> st;

        for(int i=0;i<n;i++){
            if(s[i] == '('){
                st.push({s[i],i});
            }
            else{
                if(st.top().first=='(' && !st.empty()) st.pop();
                else st.push({s[i],i});
            }
        }

        ll ans = st.size();

        vector<ll> vec;

        while(!st.empty()){
            vec.push_back(st.top().second);
            st.pop();
        }

        vec.push_back(0);
        vec.push_back(n-1);

        if(ans == 0){
            cout<<0<<" "<<1<<endl;
            continue;
        }

        ll res = 0;

        sort(vec.begin(),vec.end());

        for(int i=1;i<vec.size();i++){
            if(vec[i] - vec[i-1] > 1) res++;
        }

        cout<<ans<<" "<<res<<endl;
    }
return 0;
}

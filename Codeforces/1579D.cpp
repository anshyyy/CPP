#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define pii pair<int,int>
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
        int n;
        cin >> n;
        vector<pii>arr;
        priority_queue<pair<int,int>>p;
        for(int i = 0;i<n;i++){
            int ai;
            cin>>ai;
            if(ai) p.push(make_pair(ai,i+1));
        }
        while(p.size()>1){
            auto p1 = p.top();p.pop();
            auto p2 = p.top();p.pop();
            arr.push_back(make_pair(p1.second,p2.second));
            if(--p1.first)p.push(p1);
            if(--p2.first)p.push(p2);
        }
        cout<<arr.size()<<endl;
        for(auto &x :arr){
            cout<<x.first<<" "<<x.second<<endl;
        }
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
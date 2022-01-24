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
void solve(){ 
     int n;
     cin>>n;
     set<int>s;
     loop(i,0,n) s.insert(i+1);
     vector<int>arr;
     for (int i = 0; i < n; i++)
     {
         int x;
         cin>>x;
         if(s.count(x)){
             s.erase(x);
         }
         else arr.push_back(x);
     }
     sort(allr(arr));
     int p=0;
     bool flag = false;
     for(auto &x :arr){
         auto it = s.end();
         it--;
         int ct = *it;
         if(ct>(x-1)/2){
             flag=true;
             break;
         }
         s.erase(it);
     }
     flag?cout<<"-1\n":cout<<arr.size()<<endl;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
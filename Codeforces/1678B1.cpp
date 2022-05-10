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
bool yes(vector<ll>&arr){
    for(int i =0;i<arr.size();i++){
        if(arr[i]%2==1) return false;
    }
    return true;
}
void solve(){ 
     ll n;cin>>n;
     string s;cin>>s;
     ll op = 0;
     ll z = 0,o=0;
     for(auto i : s)
     {
         if(i=='1'){
               if(z%2){
                   o++;
                   z=0;
                   op++;
               }
               o++;
         }
         else{
             if(o%2){
                 z++;
                 o=0;
                 op++;
             }
             z++;
         }
     }
     cout<<op<<endl;
     
     
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
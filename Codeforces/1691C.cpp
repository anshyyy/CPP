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
     ll n,k;cin>>n>>k;
     string s;cin>>s;
     int one = count(all(s),'1');
     int first_1 = s.find('1');
     int last_1 = s.find_last_of('1');
     int add = 0;
     if(one>0 && (n-1-last_1)<=k){
         k-=(n-1-last_1);
         add+=1;
         one--;
     }
     if(one>0 && first_1 <=k){
         k-=first_1;
         add+=10;
         one--;
     }
     cout<<11*one+add<<endl;
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
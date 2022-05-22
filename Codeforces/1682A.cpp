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
     int n;cin>>n;
     string s;cin>>s;
     vector<int>pos;
     for (int i = 0; i < n; i++)
     {
         int j = i;
         while(j<n&&s[i]==s[j]){ //continous fre.
             j++;
         }
         pos.push_back(j-i);
         j--;
         i=j;
     }
     int l = 0;
     int r=pos.size();
     int mid = (l+r)/2;
     cout<<pos[mid]<<endl;
     
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
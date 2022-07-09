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
     int n,q;
     cin>>n>>q;
     string s;
     cin>>s;
     int sds=0;
     while(q--){
        int t,x;
        cin>>t>>x;
        if(t==1){
            sds += 0-x;
            string temp = "";
            for(int i=n-x;i<n;i++)temp+=s[i];
            for(int i=0;i<n-x;i++) temp+=s[i];
            s = temp;
            cout<<s<<endl;
        }
        if(t==2){
            cout<<s[x-1]<<endl;
        }
     }

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
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
     map<ll,int>mp;
     vector<int>arr(n);
     bool z = true;
     int p =0,ne=0;
     loop(i,0,n){
        int x;cin>>x;
        if(x || z){
            arr[i]=x;
            z=false;
        }
        if(x>0)p++;
        if(x<0)ne++;
        mp[arr[i]]++;
     }
     if(p>2||ne>2){
        cout<<"NO\n";
        return;
     }
     n = arr.size();
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                bool f = false;
                int s = arr[i]+arr[j]+arr[k];
                for(int p = 0;p<n;p++){
                
                if(s==arr[p]){
                    f = true;
                   break;
                }
                }
                if(!f){
                    cout<<"NO\n";
                    return;
                }
            }
        }
     }
     cout<<"YES\n";
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
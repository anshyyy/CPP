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
 bool threeSum(vector<ll>& num,int tar) {
        for(int i=0;i<(int)(num.size())-1;i++){
            if(i==0||(i>0&&num[i]!=num[i-1])){
                int lo=i+1,hi=(int)(num.size())-1,sum=tar-num[i];
                while(lo<hi){
                    if(num[lo]+num[hi]==sum){
                        return true;
                    }
                    else if(num[lo]+num[hi]<sum) lo++;
                    else hi--;
                }
            }
        }
        return false;
    }
void solve(){ 
  map<ll,ll>m;
   unordered_set<int>s;
    ll n;cin>>n;
    vector<ll>arr(n);
    loop(i,0,n){
        cin>>arr[i];
        m[arr[i]]++;
        s.insert(arr[i]);
    }
    if(m.size()==1&& m[0]>0){
        cout<<"YES\n";
        return;
    }
    if(n>=5){
        cout<<"NO\n";
        return;
    }
    bool ff = false;
    loop(i,0,n){
        loop(j,i+1,n){
            loop(k,j+1,n){
              int ss = arr[i]+arr[j]+arr[k];
              if(s.count(ss)){
                 ff = true;
              }
            }
        }
    }
   if(ff)cout<<"YES\n";
   else cout<<"NO\n";

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
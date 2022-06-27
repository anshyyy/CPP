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
        sort(num.begin(),num.end());
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
     ll n;cin>>n;
     vector<ll>arr(n);
     loop(i,0,n){
        ll x;cin>>x;
        arr[i]=x%10;
     }
     if(threeSum(arr,3) || threeSum(arr,13)||threeSum(arr,23)){
        cout<<"YES\n";
     } else {
        cout<<"NO\n";
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
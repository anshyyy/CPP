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
ll lis(vector<ll>&arr){
    int n = arr.size();
    vector<ll>temp;
    temp.push_back(arr[0]);
    for (int i = 1; i <n; i++)
    {
        if(arr[i]>temp.back()){
            temp.push_back(arr[i]);
        }
        else{
            int id = lower_bound(all(temp),arr[i])-temp.begin();
            temp[id]=arr[i];
        }
    }
    return temp.size();
}
void solve(){ 
     ll n;cin>>n;
     vector<ll>arr(n);
    
     map<ll,ll>mp;
      loop(i,0,n){
          cin>>arr[i];
          mp[arr[i]]++;
      }
      ll a=0,b=0;
      for (auto x : mp)
      {
          x.ss==1?a++:b++;
      }
      cout<< b + (a+1)/2<<endl;;
      

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
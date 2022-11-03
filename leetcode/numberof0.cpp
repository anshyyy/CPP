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
long long zeroFilledSubarray(vector<int>& nums) {
        vector<long long int>pos;
        long long int cnt = 0;
        for(int i =0;i<nums.size();i++){
           int j = i;
            while(nums[j]==0 && j<nums.size())j++;
            if(i<j){
                pos.push_back(j-i);
                j--;
                i=j;
            }
        }
        long long int ans = 0;
        for(auto i :pos){
            cout<<i<<" ";
            ans += i;
            ans += (i*(i-1))/2;
        }
        cout<<endl;
        return ans; 
    }
void solve(){ 
    ll n;cin>>n;
     vector<int>arr(n);
     loop(i,0,n)cin>>arr[i];
     cout<<zeroFilledSubarray(arr)<<endl;
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
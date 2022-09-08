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
void printarr(int arr[],int n){loop(i,0,n){cout<<arr[i]<<" ";}cout<<endl;}
void printvec(vector<int>&arr){loop(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<endl;}
 void recurPermute(vector < int > & ds, vector < int > & nums, vector < vector < int >> & ans, int freq[]) {
      if (ds.size() == nums.size()) {
        ans.push_back(ds);
        return;
      }
      for (int i = 0; i < nums.size(); i++) {
        if (!freq[i]) {
          ds.push_back(nums[i]);
          freq[i] = 1;
          recurPermute(ds, nums, ans, freq);
          freq[i] = 0;
          ds.pop_back();
        }
      }
    }
    vector < vector < int >> permute(vector < int > & nums) {
      vector < vector < int >> ans;
      vector < int > ds;
      int freq[nums.size()];
      for (int i = 0; i < nums.size(); i++) freq[i] = 0;
      recurPermute(ds, nums, ans, freq);
      return ans;
    }
int q(vector<int>&arr){
    int x = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>x){
            x+=arr[i];
         } else {
            x=0;
         }
    }
    return x;
}
void solve(){ 
   int n;cin>>n;
   vector<int>arr(n);
   loop(i,0,n)arr[i]=i+1;
   vector<vector<int>>v = permute(arr);
   for(auto x : v){
    for(int i : x){
        cout<<i<<" ";
    }
    cout<<"->"<<q(x);
    cout<<endl;
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
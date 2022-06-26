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
 int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int i =0,j=n-1;
        int count = 0;
        while(i<j){
            if(x==0)return count;
            
            if(nums[j]>=nums[i] && (x - nums[j])>=0){
               // cout<<nums[j]<<" ";
                count++;
                x-=nums[j];
                j--;
            }
            else if(nums[j]<nums[i] && (x - nums[i])>=0){
               // cout<<nums[i]<<" ";
                count++;
                x-=nums[i];
                i++;
            }
            else if(x-nums[i]>=0 && x>=0){
                x-=nums[i++];
                count++;
            }
            else if(x-nums[j]>=0 && x>=0){
                x-=nums[j--];
                count++;
            }
            else return -1;
        }
        return (x==0)?count:-1;
    }
void solve(){ 
   int n;cin>>n;
   int x;cin>>x;
   vector<int>arr(n);
   loop(i,0,n)cin>>arr[i];
   cout<<minOperations(arr,x)<<endl;

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
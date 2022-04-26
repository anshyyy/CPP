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
ll solve(){ 
     int n;cin>>n;
     deque<int>dq;
     vector<int>arr;
          for(int i =0;i<n;i++){
         int x;cin>>x;
          arr.push_back(x);
         dq.push_back(x);
     }
      if(all_of(all(arr),[&](int i){return i == arr[0];})){
          //cout<<n<<endl;
          return n;
      }
     int count = 0;
     int prev = 0;
     while(!dq.empty()){
         if(dq.front()<=dq.back() && dq.front()>=prev){
             count++;
             prev = dq.front();
             dq.pop_front();
         }
         if(dq.back()<=dq.front() && dq.back()>=prev){
             count++;
             prev = dq.back();
             dq.pop_back();
         }
         else{
             if(dq.size()==1) dq.pop_back();
             else if(dq.front()<prev && dq.back()>prev){
                 dq.pop_front();
             }
            else if(dq.back()<prev && dq.front()>prev){
                 dq.pop_back();
             }
             else if(dq.front()<prev && dq.back()<prev){
                 dq.pop_front();
                 dq.pop_back();
             }
         }
     }
     return count;
}
int main() {
int t=1;
cin>>t;
 for(int i =1;i<=t;i++){
     cout<<"Case #"<<i<<": "<<solve()<<endl;;
 }
     return 0;
}
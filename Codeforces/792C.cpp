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
void rem(string &s){
   int i=0;
   while(i<s.size()-1 && s[i]=='0') i++;
   s.erase(0,i);
}
void solve(){ 
     string s;cin>>s;
     int sum = 0;
     vector<int>pos[3];
     int n = s.size();
     for(int i=0;i<n;i++){
        int t = (s[i]-'0')%3;
        sum = (sum + t)%3;
        pos[t].push_back(i);
     }
     string ans = "";
     if(sum == 0){
        ans = s;
     } else{
       string temp;
       if(pos[sum].size()>=1){
          temp = s;
          temp.erase(pos[sum].back(),1);
          rem(temp);
          
          if(temp.size()>ans.size()) ans = temp;
       }
       if(pos[3-sum].size()>=2){
          temp  = s;
          //cout<<temp<<endl;
          //cout<<pos[3-sum][pos[3-sum].size()-1]<<endl;
          //cout<<pos[3-sum][pos[3-sum].size()-2]<<endl;
          temp.erase(pos[3-sum][pos[3-sum].size()-1],1);
          temp.erase(pos[3-sum][pos[3-sum].size()-2],1);
          //cout<<temp<<endl;
          rem(temp);
          if(temp.size()>ans.size()) ans = temp;
       }
     }
     if(ans.size()==0)cout<<"-1\n";
     cout<<ans<<endl;
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
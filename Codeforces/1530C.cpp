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
      int n;
      cin>>n;
      vector<int>arr(n),brr(n);
      loop(i,0,n)cin>>arr[i];
      loop(i,0,n)cin>>brr[i];
      
      sort(all(arr));
      sort(all(brr));
      int k = n-(n/4);
      //cout<<k;
      int sum1=0,sum2=0;
      for(int i=n-1;i>=n-k;i--){
           sum1+=arr[i];
           sum2+=brr[i];
      }
     // cout<<sum1<<" "<<sum2<<endl;
       if(sum1>sum2){cout<<"0\n";return;}
      int cnt =0;
      int rem =n%4;
      int i = n/4;
      int j = (n/4) - 1;
      while(sum1<sum2){
           sum1+=100;
           cnt++;
            rem = (rem+1)%4;
           if(rem==0){
                if (i < n){sum1-=arr[i];i++;}
                else sum1-=100;
           }
           else{
                if (j>=0){sum2+=brr[j];j--;}
           }
      }
      cout<<cnt<<endl;
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
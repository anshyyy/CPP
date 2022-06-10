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
void do_this(vector<int>&arr,vector<int>&temp){
    int n = temp.size();
    for (int i = 0; i < n; i++)
     {
         if(arr[i]!=temp[i]) continue;
         if(i==n-1 && arr[i]==temp[i]){
             swap(temp[n-1],temp[n-2]);
         }
         else if(arr[i]==temp[i]){
                swap(temp[i],temp[i+1]);
         }
     }
     loop(i,0,n)cout<<temp[i]<<" ";
     cout<<endl;
}

int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 int n;cin>>n;
     vector<int>arr(n),temp(n);
     loop(i,0,n){
         cin>>arr[i];
         temp[i]=arr[i];
     }
     if(n==1){
         cout<<"-1\n";
         continue;;
     }
     sort(all(temp));
     do_this(arr,temp); 
}
     return 0;
}
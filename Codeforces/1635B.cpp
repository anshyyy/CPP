#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void solve(){ 
     ll n;
     cin>>n;
     vector<ll>arr(n),brr(n);
     loop(i,0,n){
         cin>>arr[i];
         brr[i]=arr[i];
         }
     int peak=0;
     vector<int>p;
     for(int i = 1;i<n-1;i++){
         if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
           p.push_back(peak);
           peak++;
         }
     }
     int pz =0;
     peak=(peak%2==0)?peak/2:peak/2+1;
     //cout<<peak<<endl;
       for(int i = 1;i<n-1;i++){
         if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
           int m1 = arr[i];
           int m2 = (i+2<n)?arr[i+2]:INT_MIN;
           int m0 = max(m1,m2);
           arr[i+1]= m0;
           pz++;
         }
     }
     cout<<pz<<endl;
     loop(i,0,n){
        // if(arr[i]!=brr[i]) diff++;
         cout<<arr[i]<<" ";
     }
     cout<<endl;
   //cout<<endl<<"differ " <<diff<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
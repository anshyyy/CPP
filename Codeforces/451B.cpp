#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<n+1;i++)
typedef long long int ll;
using namespace std;
void solve(){ 
     ll n,mini=INT_MAX,maxi=INT_MIN;
     cin>>n;
     ll arr[40]={4042131757, 49645896, 49957344, 78716964, 120937785, 129116222, 172128600, 211446903, 247833196, 779340466, 717548386, 709969818, 696716905, 636153997, 635635467, 614115746, 609201167, 533608141, 521874836, 273044950, 291514539, 394083281, 399369419, 448830087, 485128983, 487192341, 488673105, 497678164, 501864738, 265305156, 799595875, 831638598, 835155840, 845617770, 847736630, 851436542, 879757553, 885618675, 964068808, 969215471};
     ll brr[n+1]={};
     for1(i,n){
      //   cin>>arr[i];
         brr[i]=arr[i];
         }
      reverse(brr+1, brr + n+1);
      vector<ll>vec;
     if(is_sorted(arr+1,arr+n+1)){
         cout<<"yes\n";
         cout<<"1 1\n";
         return;
     }
      if(is_sorted(brr+1,brr+n+1)){
         cout<<"yes\n";
         cout<<"1 "<<n<<endl;
         return;
     }
    for (ll i = 1; i <n; i++)
    {
        if(arr[i]>arr[i+1]){
            mini=min(mini,i);
            maxi=max(maxi,i);
            vec.push_back(arr[i]);
        }
    }
    vec.push_back(arr[maxi+1]);
      loop(i,vec.size())cout<<vec[i]<<" ";
      cout<<endl;
      sort(vec.begin(),vec.end());
    for(ll i=maxi+2;i<n+1;i++) vec.push_back(arr[i]);
     loop(i,vec.size())cout<<vec[i]<<" ";
     if(is_sorted(vec.begin(),vec.end())){
         cout<<"yes\n";
         cout<<mini<<" "<<maxi+1<<endl;
     }
     else cout<<"no"<<endl;
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
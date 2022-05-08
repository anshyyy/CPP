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
    vector<int>arr(2*n);
    loop(i,0,2*n)cin>>arr[i];
    int cyc = (n%2==0?4:2*n);
    int pos =-1;
    for (int i = 0; i < cyc; i++)
    {
        if(is_sorted(all(arr))){
            pos = i;
            break;
        }
        if(i%2){
            for (int j = 0; j <n; j++)
            {
                swap(arr[j],arr[j+n]);
            }
        }
        else{
            for (int j= 0; j < n+n; j+=2)
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<min(pos,cyc-pos)<<endl;
    
}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
void solve(){ 
    int n,count=1,maxi=1;
    cin>>n;
    int arr[n];
    loop(i,n){
        cin>>arr[i];
    }
     if(n==1){
        cout<<"YES\n";
        return;
    }
    sort(arr,arr+n);
    loop(i,n-1){
        if(arr[i]==arr[i+1]){
            count++;
            if(count>maxi){
                maxi=count;
            }
        }
        else count=1;
    }
    cout<<(maxi<=(n+1)/2? "YES":"NO")<<endl;
}
int main() {
int t=1;

while(t--){
 solve(); 
}
     return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     int n;
     cin>>n;
     int arr[n]; int res=0;
     loop(n) cin>>arr[i];
     sort(arr,arr+n,[](int x,int y){return x%2>y%2;});
     loop(n) cout<<arr[i]<<" ";
     for (int i = 0; i <n; i++)
     {
         for (int j = i+1 ; j<n; j++)
         {
             if(__gcd(arr[i],2*arr[j])>1)
                  res++;
         }
         
     }
//cout<<res<<endl;

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
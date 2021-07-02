#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void EvenOdd(vector<int>& arr,int size)
{
     int j = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            j++;
            swap(arr[i],arr[j]);
        }
    }
 }
void solve(){ 
    
     ll n,k;
     cin>>n>>k;
     n=(n+1)/2;
     if(k<=n)cout<<k*2-1<<endl;
     else cout<<(k-n)*2<<endl;
    //   vector<int> nums(n+1);
    // //  for (ll i = 0; i <n; i++)
    // //  {
    // //      num[i]+=i;
    // //  }
    //  int j=0;
    //   for( ll i=1;i<=n;i+=2){
    //     nums[j++]=i;
    // }
    //  for(ll i=2;i<=n;i+=2){
    //     nums[j++]=i;
    // }
   
   // EvenOdd(num,n);
    // for (int i = 0; i <n; i++)
    // {
    //     cout<<nums[i]<<" ";
    // }
    
}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
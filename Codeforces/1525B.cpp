#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     int n,count=2;
     cin>>n;
     int arr[n];
     for (int i = 0; i <n; i++)
     {
        cin>>arr[i];
     }
     if(is_sorted(arr,arr+n))
       count=0;  
     else if(arr[0]==1||arr[n-1]==n) count=1;
    else if(arr[0]==n&&arr[n-1]==1) count=3; 
     cout<<count<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
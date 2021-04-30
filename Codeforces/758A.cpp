#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int t,max;
     
    
         int n,i,sum=0;
         cin>>n;
         int arr[101];
         for( i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         sort(arr,arr+i);
          max= arr[n-1];
          
         for(int i=0;i<n-1;i++)
         {
          sum += abs(max-arr[i]);
         }
         cout<<sum<<endl;
    
     
     return 0;
}
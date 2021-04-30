#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int t;
     cin>>t;
     while (t--)
     {
         int n,arr[101];
         cin>>n;
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
         sort(arr,arr+n);
         for(int i=0;i<n;i++)
         {
             if(arr[i]==arr[i+1])
             {
                 swap(arr[i+1],arr[n-1]);
             }
             cout<<arr[i]<<" ";
         }
     }
     
     return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int t;
     cin>>t;
     for(int k=1;k<=t;k++)
     {
         int n,r,count=0;
         cin>>n>>r;
         int arr[n];
         for(int i=0;i<n;i++){
             cin>>arr[i];
         }
         sort(arr,arr+n);
         for(int j=0;j<n;j++){
             if(arr[j]>r) {break;}
              else {
                 r-=arr[j];
                 count++;
             }
         }
        printf("Case #%d: %d\n",t,count);
         
     }
     
     return 0;
}
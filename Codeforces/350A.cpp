#include <bits/stdc++.h>
using namespace std;
int main() {
     int n,m;
     cin>>n>>m;
     int arr[n],brr[m];
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }
     sort(arr,arr+n);
     for (int j = 0; j < m; j++)
     {
         cin>>brr[j];
     }
     sort(brr,brr+m);
     int v= arr[0];
     int p= arr[n-1];
     int c=brr[0];
     int k= max(2*v,p);
     if(k<c){
         cout<<k<<endl;
     }
    else
    {
        cout<<"-1"<<endl;
    }
     return 0;
}
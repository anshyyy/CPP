#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main() {
     int n;
     IOS;
     cin>>n;
     int arr[101];
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }
     int m=1001,d=0;
     d=abs(arr[0]-arr[n-1]);
     m=min(m,d);
     int idx1=1,idx2=n;
     for (int i = 0; i < n; i++)
     {
        d=abs(arr[i]-arr[i+1]);
        if (m>d)
        {
           m=d;
           idx1=i+1;
           idx2=i+2;
        }
     }
     
    cout<<idx1<<" "<<idx2<<endl;
     return 0;
}
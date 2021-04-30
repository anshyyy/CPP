#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main() {
     int arr[101];
     int a,b,n;
     cin>>n;
     for (int i = 0; i < n-1; i++)
     {
         cin>>arr[i];
     }
     cin>>a>>b;
     int result=0;
     for (int i= a-1; i < b-1; i++)
     {
        result+=arr[i];
     }
     cout<<result;
     return 0;
}
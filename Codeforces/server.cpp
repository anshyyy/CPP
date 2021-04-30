#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int t;
     cin>>t;
     while (t--)
     {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i <n; i++)
        {
           cin>>arr[i];
        }
        int count=0;
        for (int i = 0; i <n; i++)
        {
            if (arr[i]==1||arr[i]==3)
            {
                count++;
            }
            
        }
        cout<<count<<endl;
     }
     
     return 0;
}
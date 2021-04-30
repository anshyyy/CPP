#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int t;
     cin>>t;
     while (t--)
     {
        int S;
        cin>>S;
        ll sum=0;
        int intro[S];
        for(int k=0;k<S;k++)
        {
            cin>>intro[k];
        }
        int i=0;
        while (i<S)
        {
          int n;
          cin>>n;
          sum+=intro[i];
          for(int j=0;j<n;j++)
          {
              int x;
              cin>>x;
              sum+=x-intro[i];
          }
          i++;
        }
        
        cout<<sum<<endl;
     }
     
     return 0;
}
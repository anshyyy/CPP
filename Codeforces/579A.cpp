#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     ll a,x=0;
     cin>>a;
     while (a>=1)
     {
        if (a%2!=0)
        {
              x++;
              a--;
        }
        else{
             a/=2;
        }
     }
     cout<<x<<endl;
     return 0;
}
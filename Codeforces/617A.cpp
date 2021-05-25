#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int n;
     cin>>n;
     if (n%5==0)
     {
         cout<<n/5<<endl;
     }
     else cout<<n/5+1<<endl;
     
     return 0;
}
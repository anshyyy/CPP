#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int k,n,w;
     cin>>k>>n>>w;
     int i=0,sum=0;
     while (i<=w)
     {
        sum+=i*k;
        i++;
     }
    if (sum<=n)
    {
       cout<<"0"<<endl;
    }
    else cout<<sum-n<<endl;
     return 0;
}
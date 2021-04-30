#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
using namespace std;
int main()
{
    int n, k,i, total = 240;
    cin >> n >> k;
    int sum=0;
    
    for ( i = 1; i <= n; i++)
    {
       sum += i*5;

       if(sum>total-k)
       {
         cout<<i-1<<endl;
         return 0;
          
       }
    }
     cout<<i-1<<endl;

    return 0;
}
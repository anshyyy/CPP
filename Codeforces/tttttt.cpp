#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, i, o, t;
    cin >> n >> o;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
  sort(arr, arr+n,greater<int>());
      
   while (o--)
    {
        cin >> t >> i;
        if (t == 2)
        {
            cout << arr[i-1] << endl;
            arr[i-1]=1-arr[i-1];
        }
        if (t == 1)
        {
          arr[i-1]=  1 - arr[i-1];
        }
    } 

    return 0;
}
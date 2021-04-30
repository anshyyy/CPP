#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    int arr[n];
    int count = 0;
   
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     int min = arr[0];
    int max = arr[0];
     for (i = 0; i < n; i++){

        if (arr[i] > max)
        {
            max = arr[i];
            count++;
        }
         if (arr[i] < min)
        {
            min = arr[i];
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
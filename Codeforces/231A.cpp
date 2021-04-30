#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[3];
    int sum = 0;
    int count = 0;
    cin >> n;
    while (n--)
    {

        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
    }
    for (int i = 0; i < 3; i++)
    {
       // sum += arr[i];
        if (arr[i] == 1)
            sum++;

        if (sum >= 2)
            count++;
    }
    cout<<count;

    return 0;
}
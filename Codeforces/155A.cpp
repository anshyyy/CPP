#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int min = 0;
    int max = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (!i)
        {
            min = x;
            max = min;
        }
        else
        {
            if (x > max)
            {
                max = x;
                ++count;
            }
            else if (x < min)
            {
                ++count;
                min = x;
            }
        }
    }
    cout << count;
    return 0;
}
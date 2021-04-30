#include <bits/stdc++.h>
using namespace std;
char s[100];
int a[100];
int main()
{
    int n;
    cin >> n;
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int k = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        if (s[i] == 'B')
        {
            while (s[i] == 'B')
            {
                x++;
                i++;
            }
            sum++;
            a[k++] = x;
        }
    }
    cout << sum << endl;
    if (sum)
    {
        for (int i = 0; i < k; i++)
        {
            if (i)
                cout <<" "<< a[i];
            else
                cout << a[i];
        }
        cout << endl;
    }
    return 0;
}
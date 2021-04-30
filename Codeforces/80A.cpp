#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    int n, m, i;
    cin >> n >> m;
    int flag = 0;
    int count = 0;
    for (i = n + 1; i <= m; i++)
    {
        count = 0;
        for (int j = 2; j <= (i / 2) + 1; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 0)
        {
            if (i == m)
            {
                cout << "YES" << endl;
                flag = 1;
                break;
            }
            else
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
    }
    if(!flag)cout<<"NO"<<endl;
    return 0;
}
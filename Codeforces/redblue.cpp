#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, b, d;
        cin >> r >> b >> d;
        bool flag = false;
        if (d == 0)
        {
            if (r == b)
            {
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else if(b>1&&r>1)
        {
            while (b != 0 && r != 0)
            {
                b = b % r;
                r = b / r;
                if (abs(b - r) <= d)
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                }
            }
            if (flag == true)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if(b==1||r==1)
        {
            if(abs(b-r)>d)cout<<"NO"<<endl;
            else cout<<"yes"<<endl;
        }
        
    }

    return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
  int r,b,d;
  cin>>r>>b>>d;
  int flag=0;
     while (b != 0 && r != 0)
            {
                b = b % r;
                r = b / r;
                if (abs(b - r) <= d)
                {
                    flag = 1;
                }
                else
                {
                    flag = 0;
                }
            }
            cout<<flag;
            if (flag == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
   return 0;
}
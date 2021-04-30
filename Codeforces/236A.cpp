#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    char n[1000];
    cin >> n;
   int l= strlen(n);
   sort(n,n+l);
    for (int i = 0; i < l; i++)
    {
            if (n[i] != n[i+1])
            {
                count++;
            }
    }
     if(count%2==0)
    {
        cout<<"CHAT WITH HER!\n";
    }
    else
    {
        cout<<"IGNORE HIM!\n";
    }

    return 0;
}
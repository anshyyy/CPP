#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;
    string res;
    for (int i = 0; i < x.size(); i++)
    {
        char ch = tolower(x[i]);

        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y')
        {
            continue;
        }
        else
        {
            cout << "." << ch;
        }
    }
    cout << res;

    return 0;
}
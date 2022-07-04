#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;cin>>T;
    while(T--)
    {
      
    long long r, c;
    cin >> r >> c;
    vector<vector<long long >> matrix;
    long long  i, j;
    matrix.push_back({0, 1, 1, 0});
    matrix.push_back({0, 1, 1, 0});
    matrix.push_back({1, 0, 0, 1});
    matrix.push_back({1, 0, 0, 1});
    for(i=0;i<r;i++)
    {
        for(j=0; j<c;j++)
        {
            cout << matrix[i % 4][j % 4] << " ";
        }
        cout << endl;
    
    }
}

    return 0;
}
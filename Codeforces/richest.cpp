#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
 int maximumWealth(vector<vector<int>> accounts) {
       int max,sum;
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                sum+=accounts[i][j];
                if(max<=sum){
                    max=sum;
                }
                
            }
            sum=0;
        }
        return max;
    }
int main() {
    int n=3,m=3;
     vector<vector<int>> accounts;
     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < m; j++)
        {
           cin>>accounts[i][j];
        }
        
     }
     cout<<maximumWealth(accounts);
     return 0;
}
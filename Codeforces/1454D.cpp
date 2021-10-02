#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
vector<int> primeFactors(int n)
{
    vector<int>arr;
    while (n % 2 == 0)
    {
       // cout << 2 << " ";
        arr.push_back(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
           // cout << i << " ";
            arr.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
       arr.push_back(n);

       return arr;
}
void solve(){ 
     int n;
     cin>>n;
     vector<int> res = primeFactors(n);
     loop(i,res.size())cout<<res[i]<<" ";

}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;

 
// See https://www.geeksforgeeks.org/space-and-time-efficient-binomial-coefficient/
// for details of this function
ll binomialCoeff(int n, int k)
{
    int res = 1;
    if (k > n - k)
    k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
     
    return res;
}
void printPascal(int n)
{
    // Iterate through every line and
    // print entries in it
    for (int line = 0; line < n; line++)
    {
        // Every line has number of
        // integers equal to line
        // number
        for (int i = 0; i <= line; i++)
            cout << binomialCoeff(line, i)<<" ";
        cout <<"\n";
    }
}
void solve(){ 
     ll n;cin>>n;
     printPascal(n);
}
int main() {
IOS;
int t=1;

while(t--){
 solve(); 
}
     return 0;
}
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
int minDistance(vector<int>& A, int K) {
        sort(all(A));
        int n = A.size();
        vector<int> B(n + 1, 0), dp(n, 1e6);
        for (int i = 0; i < n; ++i)
            B[i + 1] = B[i] + A[i];
        for (int k = 1; k <= K; ++k)
            for (int j = n - 1; j > k - 2; --j)
                for (int i = k - 2; i < j; ++i) {
                    int m1 =  (i + j + 1) / 2, m2 = (i + j + 2) / 2;
                    int last = (B[j + 1] - B[m2]) - (B[m1 + 1] - B[i + 1]);
                    dp[j] = min(dp[j], (i >= 0 ? dp[i] : 0) + last);
                }
        return dp[n - 1];
    }
void solve(){ 
     int n;cin>>n;
     int k;
     cin>>k;
     vector<int>a(n),b(n);
     loop(i,0,n)cin>>a[i];
     loop(i,0,n)cin>>b[i];
     cout<<minDistance(a,k)<<endl;
     
}
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
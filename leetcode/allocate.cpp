#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int main() {
IOS;
int t=1;
cin>>t;
while(t--){
 int n;cin>>n;
     int C;
     cin>>C;
     vector<int>A(n),b(n);
     loop(i,0,n)cin>>A[i];
     loop(i,0,n)cin>>b[i];
     sort(A.begin(), A.end());
        vector<int> B(n + 1, 0), dp(n, 1e6);
        for (int i = 0; i < n; ++i)
            B[i + 1] = B[i] + A[i];
        for (int k = 1; k <= C; ++k)
            for (int j = n - 1; j > k - 2; --j)
                for (int i = k - 2; i < j; ++i) {
                    int m1 =  (i + j + 1) / 2, m2 = (i + j + 2) / 2;
                    int last = (B[j + 1] - B[m2]) - (B[m1 + 1] - B[i + 1]);
                    dp[j] = min(dp[j], (i >= 0 ? dp[i] : 0) + last);
                }
        cout<< dp[n - 1] <<endl;
}
     return 0;
}
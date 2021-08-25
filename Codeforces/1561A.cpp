#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define loop(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
using namespace std;
int minInsertionStepToSortArray(int arr[], int N)
{
    int lis[N];

    for (int i = 0; i < N; i++)
        lis[i] = 1;

    for (int i = 1; i < N; i++)
        for (int j = 0; j < i; j++)
            if (arr[i] >= arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;

    int max = 0;
    for (int i = 0; i < N; i++)
        if (max < lis[i])
            max = lis[i];
    return (N - max);
}
void solve()
{
   int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) cin >> A[i];
    int te = 1;
    while (!is_sorted(A, A + n)) {
        if (te % 2) {
            for (int i = 0; i < n - 1; i++) {
                if (((i + 1) % 2) && A[i] > A[i + 1])
                    swap(A[i], A[i + 1]);
            }
        }
        else {
            for (int i = 0; i < n - 1; i++) {
                if (!((i + 1) % 2) && A[i] > A[i + 1])
                    swap(A[i], A[i + 1]);
            }
        }
        te++;
    }
    cout << te - 1<< endl;
    
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
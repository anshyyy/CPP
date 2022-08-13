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
void printarr(int arr[],int n){loop(i,0,n){cout<<arr[i]<<" ";}cout<<endl;}
void printvec(vector<int>&arr){loop(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<endl;}
int CountSteps(string s1, string s2, int size)
{
    int i = 0, j = 0;
    int result = 0;
 
    // Iterate over the first string and convert
    // every element equal to the second string
    while (i < size) {
        j = i;
 
        // Find index element of first string which
        // is equal to the ith element of second string
        while (s1[j] != s2[i]) {
            j += 1;
        }
 
        // Swap adjacent elements in first string so
        // that element at ith position becomes equal
        while (i < j) {
 
            // Swap elements using temporary variable
            char temp = s1[j];
            s1[j] = s1[j - 1];
            s1[j - 1] = temp;
            j -= 1;
            result += 1;
        }
        i += 1;
    }
    return result;
}
void solve(){ 
 string s = "atcoder";
 string t;cin>>t;
 cout<<CountSteps(s,t,7)<<endl;
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
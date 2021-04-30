#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int countDistinct(int arr[], int n)
{
    unordered_set<int> s;
    int res = 0;
    for (int i = 0; i < n; i++) {
 
        if (s.find(arr[i]) == s.end()) {
            s.insert(arr[i]);
            res++;
        }
    }
    return res;
}
int main() {
     int t;
     cin>>t;
     while (t--)
     {
         int n ,m;
         cin>>n>>m;
         int arr[n];
         for (int i = 0; i < n; i++)
         {
             cin>>arr[i];
         }
         if (countDistinct(arr,n)>=m)
         {
             cout<<"NO"<<endl;
         }
         else
         {
             cout<<"YES"<<endl;
         }
         
     }
     
     return 0;
}
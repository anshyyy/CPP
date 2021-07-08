#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void solve(){ 
     int n,count=0;
     cin>>n;
     int arr[n];
     for (int i = 0; i <n; i++)
     {
        cin>>arr[i];
     }
     int i, j, min_idx;
    // for (i = 0; i < n-1; i++)
    // {
    //     min_idx = i;
    //     for (j = i+1; j < n; j++)
    //     if (arr[j] < arr[min_idx])
    //         min_idx = j;
    //     swap(arr[min_idx], arr[i]);
    //     count++;
    // }
    for (int i = 1; i <n; i++)
    {
        if(arr[i-1]<arr[i]&&arr[i]>arr[i+1]){
            count++;
            i++;
        }
    }
    
     
     cout<<count<<endl;
     
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
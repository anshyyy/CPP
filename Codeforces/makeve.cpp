#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
void solve(){
    int n,sum=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n ; i++)
    {
        cin>>n;
        
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    
    if (sum%2==0)
    {
        cout<<"0"<<endl;
    }
    else 
    {
        if (sum%2!=0)
        {
            cout<<"1"<<endl;
        }
        
        if((sum+1)%2!=0){cout<<"-1";}

    }
    
    
}
int main() {
     int t;
     cin>>t;
     while(t--){
         solve();
     }
     return 0;
}
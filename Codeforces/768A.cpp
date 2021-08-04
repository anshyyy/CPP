#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
int remove_duplicate_elements(int arr[], int n)
{

if (n==0 || n==1)
return n;

int temp[n];

int j = 0;
int i;
for (i=0; i<n-1; i++)
if (arr[i] != arr[i+1])
temp[j++] = arr[i];
temp[j++] = arr[n-1];

for (i=0; i<j; i++)
arr[i] = temp[i];

return j;
}

void solve(){ 
     int n,c1=0,c2=0;
     cin>>n;
     int arr[n];loop(i,n) cin>>arr[i];
     int mini=*min_element(arr,arr+n);
     int maxi=*max_element(arr,arr+n);
     for (int i = 0; i <n; i++)
     {
         if(arr[i]==mini) c1++;
         if(arr[i]==maxi) c2++;
     }
     if(mini==maxi) cout<<0<<endl;
     else cout<<(n-c1-c2)<<endl;

}
int main() {
int t=1;
//cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
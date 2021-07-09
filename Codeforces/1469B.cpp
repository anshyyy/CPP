#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define loop(n) for(int i=0;i<n;i++)
using namespace std;
void alternateMerge(vector<int>&arr1, vector<int>&arr2, int n1,
                    int n2, vector<int>& arr3)
{
    int i = 0, j = 0, k = 0;
    while (i<n1 && j <n2)
    {
        arr3[k++] = arr1[i++];
        arr3[k++] = arr2[j++];
    }
    while (i < n1)
        arr3[k++] = arr1[i++];
    while (j < n2)
        arr3[k++] = arr2[j++];
}
void solve(){ 
     int n,m;
     cin>>n;
     vector<int>a(n);
     for(int &x:a) cin>>x;
     cin>>m;
     vector<int>b(m);
     for(int &y:b) cin>>y;
     vector<int> c(n+m);
     partial_sum(a.begin(),a.end(),a.begin());
     partial_sum(b.begin(),b.end(),b.begin());
    cout<<max(0,*max_element(a.begin(),a.end()))+max(0,*max_element(b.begin(),b.end()))<<endl;;
}
int main() {
int t=1;
cin>>t;
while(t--){
 solve(); 
}
     return 0;
}
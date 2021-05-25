#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main() {
     int arr[3];
     for (int i = 0; i < 3; i++)
     {
        cin>>arr[i];
     }
     sort(arr,arr+3);
     cout<<(arr[2]-arr[1])+(arr[1]-arr[0])<<endl;

     return 0;
}
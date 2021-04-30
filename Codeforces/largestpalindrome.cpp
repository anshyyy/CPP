#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int largestPalindrome(int n){
    int ul=pow(10,n)-1;
    int lol=1+ul/10;
    int maxi=0;
    for(int i=ul;i>=lol;i--)
    {
        for (int j = i; j >=lol;j--)
          {
            int pro=i*j;
            if(pro<maxi)
            break;
            int num=pro;
            int rev=0;
            while (num!=0)
            {
                rev=rev*10+num%10;
                num/=10;

            }
            if(pro==rev&&pro>maxi)
            maxi=pro;

          }
        
        
    }
    return maxi;
}
int main() {
    int n;
    cin>>n;
    cout<<largestPalindrome(n);
     
     return 0;
}
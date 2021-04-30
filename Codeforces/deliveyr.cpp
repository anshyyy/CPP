#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int operate(int array[], int N)
{
    int sum = 0, index = 0;
label:
    sum += array[index++];
    if (index < N) {
        goto label;
    }
    return sum;
}
int main() {
     int t;
     cin>>t;
     while (t--)
     {
        int C,D,n=3;
        cin>>D>>C;
        int A[3],B[3];
        int Asum,Bsum;
        int total1,total2;
        for(int i=0;i<n;i++){ cin>>A[i];}
        for(int i=0;i<n;i++){cin>>B[i];}
        Asum=operate(A,n);
        Bsum=operate(B,n);
        if(Asum>=150&&Bsum>=150)
        {
            total1=Asum+Bsum+2*D;
            total2=Asum+Bsum+C;
            if(total1>total2) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else if(Asum>=150&&Bsum<=150)
        {
             total1=Asum+Bsum+2*D;
             total2=Asum+Bsum+C+D;
             if(total1<=total2)cout<<"NO\n";
             else cout<<"YES\n";

        }
        else if(Asum<=150&&Bsum<=150){ cout<<"N0\n";}
        else if (Asum<=150&&Bsum>=150){cout<<"N0\n";}
     }
     
     return 0;
}
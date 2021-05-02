#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        int s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        sort(a,a+n);
        if(s==x)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            int flag=1;
            while(flag==1){
                flag=0;
                int b[n];
                for(int i=1;i<n;i++)
                    b[i-1]=a[i];
                b[n-1]=a[0];
                int summ=0;
                for(int i=0;i<n;i++){
                    a[i]=b[i];
                    summ+=b[i];
                    if(summ==x)
                        flag=1;
                }
                if(flag==0){
                    for(int i=0;i<n;i++)
                        cout<<a[i]<<" ";
                    cout<<endl;
                }
            }
        }

    }
    return 0;
}
#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define loop(i,n) for(int i=0;i<n;i++)
#define for1(i,n) for(int i=1;i<=n;i++)
typedef long long ll;
using namespace std;
int32_t main() {
    
     int t;
     cin>>t;
     while(t--){
        long long n;
        cin >> n ;
        string s;
        cin >> s ;
        vector<long long>Hated;
        char ans[n+10][n+10];
        long long Count_2 = 0;
        for(int i=0;i<n;i++) {
            Count_2+=(s[i]=='2');
            if(s[i]=='2') {
                Hated.push_back(i);
            }
        }
        memset(ans,'.',sizeof ans);
        if(Count_2<=2&&Count_2) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            for(int i=0;i<s.size();i++) {
                if(s[i]=='1') {
                    for(int j=0;j<n;j++) {
                        ans[i][j]='=';
                        ans[j][i]='=';
                    }
                }
            }
            for(int i=0;i<Hated.size();i++) {
                for(int j=0;j<Hated.size();j++) {
                    if(i==j){continue;}
                    if(ans[Hated[i]][Hated[j]]=='.') {
                        ans[Hated[i]][Hated[j]] ='=';
                        ans[Hated[i]][Hated[j]] = '=';
                    }
                }
                if(i==Hated.size()-1) {
                    ans[Hated[i]][Hated[0]]='+';
                    ans[Hated[0]][Hated[i]]='-';
                }
                else{
                    ans[Hated[i]][Hated[i+1]]='+';
                    ans[Hated[i+1]][Hated[i]]='-';
                }
            }
            for(int i=0;i<n;i++) {
                ans[i][i]='X';
                for(int j=0;j<n;j++) {
                    cout <<ans[i][j];
                }
                cout << '\n';
            }
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define loop(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
using namespace std;
void solve()
{
   ll n,m;
	ll arr[101][101];
	ll brr[101][101];

	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>brr[i][j];
		}
	}
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++) arr[i][j]=1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(brr[i][j]==0){
				for(int k=0;k<m;k++) arr[i][k]=0;
				for(int l=0;l<n;l++) arr[l][j]=0;
			}
		}
	}
	ll orn[101];
	ll orm[101];
	for(int i=0;i<n+1;i++){
		orn[i]=0;
		orm[i]=0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			orn[i]=(orn[i]|arr[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			orm[i]=(orm[i]|arr[j][i]);
		}
	}
	int flag=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
               //cout<<brr[i][j]<<" "<<orn[i]<<" "<<orm[j]<<" ";
			   //cout<<(orn[i]|orm[j])<<endl;
			  // cout<<"hello\n";
			if(brr[i][j]!=(orn[i]|orm[j])){
				flag=1;
				break;
			}
		}
		if(flag==1) break;
	}

	if(flag==0){
		cout<<"YES\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<arr[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	else cout<<"NO\n";
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
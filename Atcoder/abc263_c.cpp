#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define loop(i,a,n) for(int i=a;i<n;i++)
#define all(v) (v).begin(),(v).end()
#define all1(v) (v).begin()+1,(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define allr1(v) (v).rbegin()+1,(v).rend()
#define ff first
#define ss second
typedef long long ll;
const ll INF = 1e9+7;
const ll MOD = 998244353;
using namespace std;
void printarr(int arr[],int n){loop(i,0,n){cout<<arr[i]<<" ";}cout<<endl;}
void printvec(vector<int>&arr){loop(i,0,arr.size()){cout<<arr[i]<<" ";}cout<<endl;}
bool check(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>=arr[i+1])return false;
    }
    return true;
}

void combinationUtil(int arr[], int data[],
					int start, int end,
					int index, int r)
{
	if (index == r)
	{
        if(check(data,r)){
	   	for (int j = 0; j < r; j++)
			cout << data[j] << " ";
		cout << endl;
		return;
        }
	}
	for (int i = start; i <= end &&
		end - i + 1 >= r - index; i++)
	{
		data[index] = arr[i];
		combinationUtil(arr, data, i+1,
						end, index+1, r);
	}
}
void printCombination(int arr[], int n, int r)
{
	int data[r];
	combinationUtil(arr, data, 0, n-1, 0, r);
}
void solve(){ 
    int n,m;cin>>m>>n;
    int arr[n];
    loop(i,0,n)arr[i]=i+1;
    printCombination(arr,n,m);
}
int main() {
IOS;
int t=1;
while(t--){
 solve(); 
}
     return 0;
}
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
char c[10005];
int re[10005];
int main()
{
	int n;
	cin>>n;
	memset(re,0,sizeof(re));
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
	}
	int k=0,sum=0;
	for(int i=0;i<n;i++)
	{
		int a=0;
		if(c[i]=='B')
		{
			while(c[i]=='B')
			{
				a++;//The number of B in the continuous interval
				i++;
			}
			 sum++;//The number of continuous intervals
			re[k++]=a;
		}
	}
	cout<<sum<<endl;
	if(sum)
	{
		for(int i=0;i<k;i++)
		{
			if(i) cout<<" "<<re[i];
			else cout<<re[i];
		}
	cout<<endl;	
	}
 } 
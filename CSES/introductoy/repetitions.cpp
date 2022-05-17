#include <bits/stdc++.h>


using namespace std;

int main() {
	string s;cin>>s;
	vector<int>cc;
	for(int i =0;i<s.size();i++){
		int j =i;
		while(j<s.size() && s[i]==s[j]){
			j++;
		}
		cc.push_back(j-i);
		j--;
		i=j;
	}
	int maxi = INT_MIN;
	for(int i =0;i<cc.size();i++){
         maxi = max(maxi,cc[i]);
		 //cout<<cc[i]<<" ";
	}
	cout<<maxi<<endl;
	return 0;
}
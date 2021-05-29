#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
     string t;
       getline(cin,t);
       unordered_set<char> s;
     for (int i = 0; i <t.length(); i++)
     {
         if(isalpha(t[i]))
          s.insert(t[i]);
     }
       printf("%d",s.size());
     
     return 0;
}
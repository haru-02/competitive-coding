#include<bits/stdc++.h>
using namespace std;

int main()
{

string s;
int n,t;
cin>>n>>t;
cin>>s;

for (int i = 0; i < t; ++i)
{

for (int j = 0; j < n; j++)
{
	if (s[j]=='B'&&s[j+1]=='G')
	{
		s[j+1]='B';
		s[j]='G';
		j++;
	}
}

}

cout<<s;

return 0;
}

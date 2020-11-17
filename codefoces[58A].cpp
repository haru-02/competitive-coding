#include<bits/stdc++.h>
using namespace std;

int main()
{

string s,s1="hello";
cin>>s;
int k=0,j=0;
for(int i=0;i<s.length();i++)
{
	if(s[i]==s1[j])
	{
		j++;
		k++;

		if(k==5)
			break;

	}
}

if(k==5)
cout<<"YES";
else
cout<<"NO";

return 0;
}

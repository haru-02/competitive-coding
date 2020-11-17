#include<bits/stdc++.h>
using namespace std;

int main()
{
int c=0;
string s;
cin>>s;
for(int i=1;i<s.length();i++)
{
	if(s[i]==s[i-1])
	{	
		c++;

		if(c==6)
		break;	
	}	
	else
		c=0;
}

if (c==6)
cout<<"YES";
else
cout<<"NO";
return 0;
}

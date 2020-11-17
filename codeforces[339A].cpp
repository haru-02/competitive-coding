#include<bits/stdc++.h>
using namespace std;

int main()
{

int a[1001],c=0;
string s;
cin>>s;
for (int i = 0; i < s.length(); ++i)
{
	if(s[i]=='+')
		continue;
	
	else 
		a[c++]=s[i]-'0';
}

sort(a,a+c);

for (int i = 0; i < c; ++i)
{
	cout<<a[i];
	if(i==c-1)
	break;
	cout<<"+";
}

return 0;
}

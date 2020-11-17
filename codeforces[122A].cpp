#include<bits/stdc++.h>
using namespace std;

int main()
{

int k=0,n,a[12]={4,7,47,74,44,444,447,474,477,777,774,744};
cin>>n;
for (int i = 0; i < 12; ++i)
{
	if (n%a[i]==0)
		k=1;
}
if(k==1)
cout<<"YES";
else
cout<<"NO";

return 0;
}

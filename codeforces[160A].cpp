#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,s=0,k=0;
cin>>n;
int a[n];

for (int i = 0; i < n; ++i)
{
	cin>>a[i];
	s+=a[i];
}
sort(a,a+n);
s=s/2;
int i,c=0;
for (i = n-1; i >= 0; --i)
{
	k+=a[i];
	c++;
	if(k>s)
		break;
}
cout<<c;
return 0;
}

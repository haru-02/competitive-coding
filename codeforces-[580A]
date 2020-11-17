
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
 
long long n,m=0,c=0;
cin>>n;
long long a[n];
 
for (int i = 0; i < n; ++i)
	cin>>a[i];
 
for(int i=1;i<n;i++)
{	
	if(a[i]>=a[i-1])
	{	
		c++;
		m=max(m,c);
	}
	else
		c=0;	
}
 
cout<<m+1;
 
return 0;
}

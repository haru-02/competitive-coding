#include<bits/stdc++.h>
using namespace std;

int main()
{

long long int n,a,b,s=0;
cin>>n;

for (int i = 0; i < n; ++i)
{
	cin>>a>>b;
		s+=(a+b)*(b-a+1)/2;
}

cout<<s;

return 0;
}

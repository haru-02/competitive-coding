#include<bits/stdc++.h>
using namespace std;

int main()
{

int n,k=0;

cin>>n;

int p[n],q[n];

for (int i = 0; i < n; ++i)
{

	cin>>p[i]>>q[i];
	if(q[i]-p[i]>=2)
		k++;
}

cout<<k;

return 0;
}

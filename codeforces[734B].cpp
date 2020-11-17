#include<bits/stdc++.h>
using namespace std;

int main()
{

int k2,k3,k5,k6,s=0;

cin>>k2>>k3>>k5>>k6;

while(s>=0)
{
if(k2>0&&k5>0&&k6>0)
{	
	s+=256;
	k2--;
	k5--;
	k6--;
}
else
	break;
}

while(s>=0)
{
if(k2>0&&k3>0)
{
	s+=32;
	k2--;
	k3--;
}
else
	break;
}

cout<<s;

return 0;
}

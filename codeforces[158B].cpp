#include<bits/stdc++.h>
using namespace std;

int main()
{

int n,c=0;
cin>>n;

int arr[5]={0,0,0,0,0};

for(int i=0;i<n;i++)
{
	int a;
	cin>>a;
	++arr[a];
}

c+=arr[4];
arr[4]=0;

if(arr[2])
{
	int t=arr[2]/2;
	c+=t;
	arr[2]-=t*2;
}

if(arr[1]&&arr[3])
{
	int m=min(arr[1],arr[3]);
	c+=m;
	arr[1]-=m;
	arr[3]-=m;
}
		 
if(arr[1]&&arr[2])
{
	if(arr[2]<=(arr[1]/2)&&(arr[1]/2))
	{
		c+=arr[2];
		arr[1]-=arr[2]*2;
		arr[2]-=arr[2];
	}
	
	else
	{
		int z=min(arr[1],arr[2]);
		c+=z;
		arr[1]-=z;
		arr[2]-=z;
	}
}

 int y=arr[1]/4;
	c+=y;
	arr[1]-=y*4;
	
	if(arr[1]<4&&arr[1])
	{
		c++;
		arr[1]=0;
	}
	
for(int i=1;i<5;i++)
	c+=arr[i];


cout<<c;

return 0;
}

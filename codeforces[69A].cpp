#include<bits/stdc++.h>
using namespace std;

int main()
{

int k,n,w,cost,left;
cin>>k;
cin>>n;
cin>>w;

cost = k*((w*(w+1))/2);

if(cost>n)
left=cost-n;
else 
left=0;
cout<<left;

return 0;
}

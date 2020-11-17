#include<bits/stdc++.h>
using namespace std;

int main()
{

int a,b,n,cc=0,mc=0;

cin>>n;

while(n>0)
{
cin>>a>>b;
cc=cc+b-a;
mc=max(cc,mc);
n--;
}

cout<<mc;

return 0;
}

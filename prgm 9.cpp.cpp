#include<iostream>
using namespace std;
int perfect(int x)
{
int sum=0;
for(int i=1;i<x;i++)
{
if(x%i==0)
sum=sum+i;
}
if(sum==x)
cout<<x<<endl;
}
int main()
{
int a,b;
cout<<"enter two numbers in ascending order  to find all the perfect numbers between them"<<endl;
cin>>a>>b;
for(int j=a;j<=b;j++)
perfect(j);
return 0;
}

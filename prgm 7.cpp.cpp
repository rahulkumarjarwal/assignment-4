#include<iostream>
using namespace std;
int factorial(int y)
{
int fac=1;
for (int i=1;i<=y;i++)
fac=fac*i;
return fac;
}
int strong(int x)
{
int digit,num,sum=0;
num=x;
while(num!=0)
{
digit=num%10;
num=num/10;
sum=sum+factorial(digit);
}
if(sum==x)
cout<<x<<endl;
}
int main()
{
int a,b;
cout<<"enter two numbers in ascending number to find out all strong number between them"<<endl;
cin>>a>>b;
for(int j=a;j<=b;j++)
{
strong(j);
}
return 0;
}


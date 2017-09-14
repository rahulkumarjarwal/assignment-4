#include<iostream>
using namespace std;
void prime(int x)
{
int flag=0;
for(int i=1;i<=x;i++)
{
if(x%i==0)
flag++;
}
if (flag==2)
cout<<x<<" is a prime number"<<endl;
else
cout<<x<<" is not a prime number"<<endl;
}
void armstrong(int y)
{
int digit,num,sum=0;
num=y;
while(num!=0)
{
digit=num%10;
num=num/10;
sum=sum+digit*digit*digit;
}
if(sum==y)
cout<<y<<" is a armstrong number"<<endl;
else
cout<<y<<" is not a armstrong number"<<endl;
}
void perfect(int z)
{
int sum=0;
for(int j=1;j<=z;j++)
{
if(z%j==0)
sum=sum+j;
}
if(sum==z)
cout<<z<<" is a perfect number"<<endl;
else
cout<<z<<" is not a perfect number"<<endl;
}
int main()
{
int a;
cout<<"enter a number to check if it's prime,armstrong or perfefct"<<endl;
cin>>a;
prime(a);
armstrong(a);
perfect(a);
return 0;
}


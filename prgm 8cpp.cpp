#include<iostream>
using namespace std;
int armstrong(int x)
{
int digit,num,sum=0;
num=x;
while(num!=0)
{
digit=num%10;
num=num/10;
sum=sum+digit*digit*digit;
}
if(sum==x)
cout<<x<<endl;
}
int main()
{
int a,b;
cout<<"enter two numbers in ascending number to find out strong numbers between them"<<endl;
cin>>a>>b;
for(int i=a;i<=b;i++)
{
armstrong(i);
}
return 0;
}

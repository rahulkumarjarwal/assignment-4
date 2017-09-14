#include<iostream>
using namespace std;
int printprime(int a,int b)
{
for(int i=a;i<=b;i++)
{
int flag=0;
for(int j=1;j<=i;j++)
{
if(i%j==0)
flag++;
}
if(flag==2)
cout<<i<<endl;
}
}
int main()
{
int x,y;
cout<<"enter two number in ascending order to find out allprime numbers betrween them"<<endl;
cin>>x>>y;
cout<<"the prime numbers between "<<x<<" and "<<y<<" are"<<endl;
printprime(x,y);
return 0;
}

#include<iostream>
using namespace std;
int evenodd(int z)
{
if(z%2==0)
cout<<z<<" is an even number"<<endl;
else
cout<<z<<" is an odd number"<<endl;
}
int main()
{
int a;
cout<<"enter a number to find if it is even or odd"<<endl;
cin>>a;
evenodd(a);
return 0;
}


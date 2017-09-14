#include<iostream>
using namespace std;
float maximum(float x,float y)
{
if(x>y)
return x;
else if(y>x)
return y;
else 
return x;
}
int main()
{
float a,b,max;
cout<<"enter two numbers to find out the maximum between two numbers"<<endl;
cin>>a>>b;
max=maximum(a,b);
cout<<"the mmax. of two numbers is "<<max<<endl;
return 0;
}




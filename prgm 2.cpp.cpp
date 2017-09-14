#include<iostream>
using namespace std;
float diameter(float x)
{
float dia=2*x;
cout<<"the diameter is "<<dia<<endl;
}
float circumference(float y)
{
float circum=2*3.14*y;
cout<<"the circumfernce is "<<circum<<endl;
}
float area(float z)
{
float are=3.14*z*z;
cout<<"the area is "<<are<<endl;
}
int main()
{
float r;
cout<<"enter radius"<<endl;
cin>>r;
diameter(r);
circumference(r);
area(r);
return 0;
}

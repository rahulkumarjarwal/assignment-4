#include<iostream>
using namespace std;
float cue(float c)
{
float z;
z=c*c*c;
return z;
}
int main()
{
float a,cube;
cout<<"enter a number to find it's cube"<<endl;
cin>>a;
cube=cue(a);
cout<<"the cube of "<<a<<" is "<<cube<<endl;
return 0;
}



#include<iostream>
using namespace std;
int main()
{
//5! 5x4x3x2x1=120
int n;
long factorial=1.0;
cout<<"Enter a positive number";
cin>>n;
if(n<0)	
{
cout<<"Error!Factorial of a negative number doesn't exist";
}
else
{
for(int i=1;i<=n;i++)
factorial *=i;
}
cout<<"Factorial of"<<n<<"="<<factorial;
return 0;
}

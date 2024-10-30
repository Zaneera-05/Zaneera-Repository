#include<iostream>
using namespace std;
int main()
{
int n,i=1;
long factorial=1.0;
cout<<"Enter a positive number";
cin>>n;
if(n<0)	
{
cout<<"Error!Factorial of a negative number doesn't exist";
}
else
{
do
{
factorial*=i;
i++;
}
while(i<=n);
{
cout<<"Factorial of"<<n<<"="<<factorial;
}
}
return 0;
}

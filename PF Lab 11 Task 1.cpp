#include<iostream>
using namespace std;

struct book {
	char name[50];
	char author[20];
	int yearOfPublication;
	int numberOfPages;
};
int main()
{
	book b[5];
	for(int i=0;i<5;i++)
	{
		cout<<"\nEnter the Information about Book "<<i+1<<":\n";
		
		cout<<"Enter the name of Book: ";
		cin.getline(b[i].name,50);
		
		cout<<"Enter the name of Author: ";
		cin.getline(b[i].author,20);
		
		cout<<"Enter the Year of Publication of Book: ";
		cin>>b[i].yearOfPublication;
		
		cout<<"Enter total number of Pages of Book: ";
		cin>>b[i].numberOfPages;
		
		cin.ignore();
	}
	for(int i=0;i<5;i++)
	{
		cout<<"\nBook "<<i+1<<" Information:\n";
		cout<<"Name of Book: "<<b[i].name<<endl;
		cout<<"Author of Book: "<<b[i].author<<endl;
		cout<<"Year of Publication: "<<b[i].yearOfPublication<<endl;
		cout<<"Number of Pages: "<<b[i].numberOfPages<<endl;
	}
	return 0;
}

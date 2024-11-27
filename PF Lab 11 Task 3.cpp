#include<iostream>
using namespace std;

struct StudentGrading {
    char name[30];
    int sapID;
    char address[50];
    char department[30];
    float marks1;
    float marks2;
    float maxMarks;
};

int main() 
{
    StudentGrading students[5];
    for (int i=0;i<5;i++) 
	{
        cout<<"Enter information for student "<<i+1<<":\n";

        cout<<"Enter name: ";
        cin.getline(students[i].name,30);
        
        cout<<"Enter SAP ID: ";
        cin>>students[i].sapID;

        cin.ignore();
        
        cout<<"Enter address: ";
        cin.getline(students[i].address,50);   

        cin.ignore();
		
		cout<<"Enter department: ";
        cin.getline(students[i].department,30);

        cout<<"Enter marks for subject 1: ";
        cin>>students[i].marks1;

        cout<<"Enter marks for subject 2: ";
        cin>>students[i].marks2;
        
        cin.ignore();
        
        if(students[i].marks1>students[i].marks2)
        {
          students[i].maxMarks=students[i].marks1;
		}
		else
		{
		  students[i].maxMarks=students[i].marks2;  
		}
        cout<<endl;
    }
    for (int i = 0; i < 5; i++) {
        cout<<"\nStudent "<<i+1<<" Information:\n";
        cout<<"Name: "<<students[i].name<<endl;
        cout<<"SAP ID: "<<students[i].sapID<<endl;
        cout<<"Address: "<<students[i].address<<endl;
        cout<<"Department: "<<students[i].department<<endl;
        cout<<"Marks of Subject 1: "<<students[i].marks1<<endl;
        cout<<"Marks of Subject 2: "<<students[i].marks2<<endl;
        cout<<"Maximum Marks: "<<students[i].maxMarks<<endl;
    }
    return 0;
}

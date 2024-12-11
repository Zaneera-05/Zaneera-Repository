#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
	ofstream File("sales.txt");
	File<<"1,Sana,200,30,230";
	File.close();
}

#include <iostream> 
using namespace std; 

struct User {
 string name; 
 string password;
 }; 
  
int main() 
{ 
  User user; 
  cout << "Enter your username: "; 
  getline(cin,user.name); 
  cout << "Enter your password: "; 
  getline(cin,user.password); 
  
  if((user.name, "Username")||(user.name, "username")&&(user.password=="123456"))
    {
    cout << "Welcome, " << user.name << "! You have successfully logged in." << endl;
    } 
  else 
    { 
    cout << "Login failed. Please try again." << endl;
    }
  return 0;
}

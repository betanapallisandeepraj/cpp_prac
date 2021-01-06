#include <iostream>
 
using namespace std;
 
int main() {
   char str[] = "Hello C++";
 
   cout << "Value of str is : " << str << endl;
   char name[50];
 
   cout << "Please enter your name: ";
   cin >> name;
   cout << "Your name is: " << name << endl;

/*
	both are same
	cin >> name >> age;
	
	or

	cin >> name;
	cin >> age;

*/
   char str1[] = "Unable to read....";
   cerr << "Error message : " << str1 << endl;

   char str2[] = "Unable to read....";
   clog << "Error message log: " << str2 << endl;
}

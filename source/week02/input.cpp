#include <iostream>


using namespace std;

int main(){


cout<<"Please enter tour first name and last name and age:\n";

string first_name, last_name;
int age;


cin >> first_name>>last_name>>age;
 string name=first_name + " " + last_name;
cout<<"Hello, "<< name<< " age is "<< age<< "\n";

	return 0;
}
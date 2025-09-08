#include <iostream>
#include "parser.h"
#include <string>

using std::cout, std::cin, std::string, std::endl;

int main(){
	string fullName;
	string email;
	
	// ask for full name
	std::getline(cin, fullName);

	// ask for email
	cin >> email;

	string* firstName = new string;
	string* lastName = new string;
	
	StringUtils::parseName(fullName, firstName, lastName);
	string username = StringUtils::getUsername(email);
	
	// print info
	cout << "First Name: " << *firstName << endl;
	cout << "Last Name: " << *lastName << endl;
	cout << "Username: " << username << endl;

	//free memory
	delete firstName;
	delete lastName;

	return 0;
}

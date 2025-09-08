#include <iostream>
#include "parser.h"

using std::cout, std::cin, std::string, std::endl;

int main(){
	string fullName;
	string email;
	
	std::getline(cin, fullName);
	cin >> email;

	string* firstName = new string;
	string* lastName = new string;
	
	StringUtils::parseName(fullName, firstName, lastName);
}

#include <iostream>
#include "parser.h"
#include <string>

namespace StringUtils {

	void parseName(const std::string& fullName, std::string* firstName, std::string* lastName) {
		size_t space = fullName.find(' ');

		if (space != std::string::npos){
			*firstName = fullName.substr(0, space);
			*lastName = fullName.substr(space + 1);
		}
	}

	std::string getUsername(const std::string& email) {
		size_t endPos = email.find('@');

		if (endPos != std::string::npos){
			return email.substr(0, endPos);
		}
	}
}

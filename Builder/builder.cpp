#include <string>
#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>
#include "CodeBuilder.hpp"
using namespace std;


int main()
{
	CodeBuilder builder{ "Person" };

	std::cout << builder.add_field("name", "string").add_field("age", "int") << std::endl;

	return 0;
}
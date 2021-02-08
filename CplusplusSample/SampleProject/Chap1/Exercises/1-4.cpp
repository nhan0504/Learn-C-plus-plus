#include <iostream>
#include <string>
int main14()
{
	{ 
		const std::string s = "a string";
	    std::cout << s << std::endl;
		{ 
			const std::string s = "another string";
			std::cout << s << std::endl; 
		};
	}
	return 0;
}
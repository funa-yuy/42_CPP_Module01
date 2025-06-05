#include<iostream>
#include<string>
#include <cstdlib>

int main()
{
	std::string s = "HI THIS IS BRAIN";

	std::string *stringPTR = &s;//ポインタ型
	std::string &stringREF = s;//参照型

	std::cout << "それぞれのメモリアドレス " << std::endl;
	std::cout << "&s         : " << &s << std::endl;
	std::cout << "stringPTR  : " << stringPTR << std::endl;
	std::cout << "&stringREF : " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "それぞれの値 " << std::endl;
	std::cout << "s          : " << s << std::endl;
	std::cout << "*stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF  : " << stringREF << std::endl;

	return (0);
}

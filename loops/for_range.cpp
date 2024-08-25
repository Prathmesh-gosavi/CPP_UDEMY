#include<iostream>
#include<string>
int main()
{

	std::string Text{"Hey, how are you"};
	std::string UPPERCASE{};
	std::string LOWERCASE{};

	for(auto c:Text)
	{
		UPPERCASE += std::toupper(c);
	}

	std::cout<<UPPERCASE<<std::endl;

	for(auto c:Text)
	{
		LOWERCASE += std::tolower(c);

	}

	std::cout<<LOWERCASE<<std::endl;






	return 0;
}
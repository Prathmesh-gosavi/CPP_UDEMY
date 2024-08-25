#include<iostream>


int main()
{

	int Choice;

	std::cout<<"Menu"<<std::endl;
	std::cout<<"1: Print Hello"<<std::endl;
	std::cout<<"2: Print World"<<std::endl;
	std::cout<<"1: Print Goddbye"<<std::endl;
	std::cout<<"enter the choice(1-3)"<<std::endl;

	std::cin>>Choice;

	switch(Choice)
	{
	case 1:
		std::cout<<"hello";
		[[faulthrough]];

	case 2:
		std::cout<<"world";
		break;

	case 3:
		std::cout<<"Goddbye";
		break;

	default:
		std::cout<<"invalid choice";

	}






	return 0;
}
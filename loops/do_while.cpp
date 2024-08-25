#include<iostream>


int main()
{

	bool bcorret{false};



	do
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
		std::cout<<"hello"<<std::endl;
		bcorret=true;
		[[faulthrough]];

	case 2:
		std::cout<<"world";
		bcorret=true;
		break;

	case 3:
		std::cout<<"Goddbye";
		bcorret=true;
		break;

	default:
		std::cout<<"invalid choice";

	}

 }while(!bcorret);

	return 0;
}
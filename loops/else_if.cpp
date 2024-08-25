#include<iostream>

int main()
{
	auto Score{0};

	std::cout <<"enter your score:";
	std::cin >> Score;

	if(Score>70)
	{
		std::cout <<"you pased frist class"<<std::endl;
	}
	else if(Score>50 && Score<70)
	{
		std::cout <<"you pased average class"<<std::endl;
	}
	else
	{
		std::cout<<"you failedd!!!!!!!!!!!!!!"<<std::endl;
	}

	return 0;
}
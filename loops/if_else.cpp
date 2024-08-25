#include<iostream>


int main()
{
	int Number{0};

	std::cout << "enter the number";
	std::cin >> Number;

	if(Number>0)
	{
		std::cout<<"number is positive";
	}
	else
	{
		std::cout<<"number is negative";
	}

	return 0;
}
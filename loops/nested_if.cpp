#include<iostream>

int main()
{
	int Age;
	char HasDrivingTest;

	std::cout<< "enter your age";
	std::cin>>Age;

	std::cout <<"have you passed the driving test ?(Y/N)";
	std::cin>>HasDrivingTest;

	if(Age>=18)
	{
		if(HasDrivingTest=='y' || HasDrivingTest=='Y')
		{
			std::cout<<"you are eligible to driving license"<<std::endl;
		}
	}
    else
    {
    	std::cout<<"you not aligeble to driving test"<<std::endl;
    }


	return 0;
}
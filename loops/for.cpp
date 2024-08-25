#include<iostream>

int main()
{
	int NumIteam{0};
	int TotalCost{0};

	std::cout<<"Number of Iteam";
	std::cin>>NumIteam;

	for(int i=0;i<NumIteam;++i)
	{
		int IteamPrice{0};
		std::cout<<"enter the iteam price";
		std::cin>>IteamPrice;
		TotalCost+=IteamPrice;
	}

	std::cout<<"Total Cost is :"<<TotalCost<<std::endl;

	return 0;
}
#include<iostream>


int main()
{
	int i;

	for( i=0;i<10;i++)
	{
		if(i==5)
		{
			break;
		}
		std::cout<<"value of i:"<<i<<std::endl;

	}

	for(i=0;i<10;i++)
	{
		if(i==5)
		{
			continue;
		}
		std::cout<<"value of i:"<<i<<std::endl;
		
	}
	return 0;
}
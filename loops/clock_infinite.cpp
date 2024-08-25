#include<iostream>
#include<chrono>
#include<ctime>
#include<thread>

int main()
{
	while(true)
	{
	auto Now = std::chrono::system_clock::now();
	std::time_t CurrentTime;
	std::time(&CurrentTime);

	char Buffer[26];

	ctime(Buffer,sizeof(Buffer),&CurrentTime);

	std::cout<<"Current Time:"<<Buffer<<std::endl;
}
	return 0;
}
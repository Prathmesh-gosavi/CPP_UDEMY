#include<iostream>


int main()
{


	int Num1{10}, Num2{20}, Num3{30};

	std::cout<<Num1<<"is greater than "<<Num2<<"and "<<Num3<< ":"<<((Num1>Num2)&&(Num1>Num3))<<std::endl;
	std::cout<<Num2<<"is greater than "<<Num1<<"and "<<Num3<< ":"<<((Num2>Num1)&&(Num2>Num3))<<std::endl;
	std::cout<<Num3<<"is greater than "<<Num2<<"and "<<Num1<< ":"<<((Num3>Num2)&&(Num3>Num1))<<std::endl<<std::endl;

	std::cout<<Num1<<"is greater than "<<Num2<<"and "<<Num3<< ":"<<((Num1>Num2)||(Num1>Num3))<<std::endl;
	std::cout<<Num2<<"is greater than "<<Num1<<"and "<<Num3<< ":"<<((Num2>Num1)||(Num2>Num3))<<std::endl;
	std::cout<<Num3<<"is greater than "<<Num2<<"and "<<Num1<< ":"<<((Num3>Num2)||(Num3>Num1))<<std::endl<<std::endl;
	

	std::cout<<Num3<<"is greater than "<<Num2<< ":"<<!(Num3>Num2)<<std::endl<<std::endl;


	return 0;
}
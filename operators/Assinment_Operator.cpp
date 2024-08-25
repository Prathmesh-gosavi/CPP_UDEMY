#include<iostream>

int main()
{
	int Num1{20}, Num2{12};

/*	std::cout<<"value of num1:="<<Num1<< "  value of Num2:="<<Num2<<std::endl;

	Num1=Num2;


	std::cout<<"value of num1:="<<Num1<< "  value of Num2:="<<Num2<<std::endl;
*/

	std::cout<<"---------------adding to assine---------------"<<std::endl;

	Num1 += Num2;

	std::cout<<"value of Num1:"<<Num1<<std::endl;
	std::cout<<"value of Num2:"<<Num2<<std::endl;


	std::cout<<"---------------subtract to assine---------------"<<std::endl;

	Num1 -= Num2;

	std::cout<<"value of Num1:"<<Num1<<std::endl;
	std::cout<<"value of Num2:"<<Num2<<std::endl;

    std::cout<<"---------------multiplication to assine---------------"<<std::endl;

	Num1 *= Num2;

	std::cout<<"value of  Num1:"<<Num1<<std::endl;
	std::cout<<"value of Num2:"<<Num2<<std::endl;


    std::cout<<"---------------division to assine---------------"<<std::endl;

	Num1 /= Num2;

	std::cout<<"value of  Num1:"<<Num1<<std::endl;
	std::cout<<"value of Num2:"<<Num2<<std::endl;
    
    std::cout<<"---------------module to assine---------------"<<std::endl;//we got the remainder

	Num1 %= Num2;

	std::cout<<"value of  Num1:"<<Num1<<std::endl;
	std::cout<<"value of Num2:"<<Num2<<std::endl;

    std::cout<<"---------------final to assine---------------"<<std::endl;


	std::cout<<"value of  Num1:"<<Num1<<std::endl;
	std::cout<<"value of Num2:"<<Num2<<std::endl;

	return 0;
}

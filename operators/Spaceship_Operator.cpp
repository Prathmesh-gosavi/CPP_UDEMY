#include <iostream>
#include <compare>

int main() {
    int Num1{20} ,Num2{20};
    

    auto Result = Num1 <=> Num2; // This will work with C++20

    if (Result < 0) {
        std::cout << "Num1 is less than Num2" << std::endl;
    } else if (Result > 0) {
        std::cout << "Num1 is greater than Num2" << std::endl;
    } else {
        std::cout << "Num1 is equal to Num2" << std::endl;
    }

    return 0;
}

prathmesh@prathmesh-1-2:~/Documents/CPP_UDEMY/operators$ g++ Spaceship_Operator.cpp
Spaceship_Operator.cpp: In function ‘int main()’:
Spaceship_Operator.cpp:8:26: error: expected primary-expression before ‘>’ token
    8 |     auto Result = Num1 <=> Num2; // This will work with C++20
      |                          ^
prathmesh@prathmesh-1-2:~/Documents/CPP_UDEMY/operators$ g++ -std=c++20 Spaceship_Operator.cpp -o Spaceship_Operator
prathmesh@prathmesh-1-2:~/Documents/CPP_UDEMY/operators$ ./Spaceship_Operator
Num1 is equal to Num2
prathmesh@prathmesh-1-2:~/Documents/CPP_UDEMY/operators$ 

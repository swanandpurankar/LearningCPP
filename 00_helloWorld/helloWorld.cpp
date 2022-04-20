#include <iostream>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int result = 0;
    std::cout << "Hello, World!\t" <<  std::endl;
    
    std::cout << "Enter a number:  ";
    std::cin >> num1;

    std::cout << "Enter another number: ";
    std::cin >> num2;

    result = num1 + num2;
    std::cout << "Result of addition of these two numbers is "<< result << std::endl;

}


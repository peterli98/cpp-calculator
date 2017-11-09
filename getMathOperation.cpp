#include <iostream>

int getMathOperation()
{
    char op;
    std::cin >> op;

    if(op == '+')
    {
        return 1;
    }
    else if(op == '-')
    {
        return 2;
    }
    else if(op == '*')
    {
        return 3;
    }
    else if(op == '/')
    {
        return 4;
    }
    else
    {
        std::cout << "Invalid operator, please try again" << std::endl;
        return getMathOperation();
    }
}
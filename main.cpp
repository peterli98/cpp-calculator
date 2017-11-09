#include <iostream>
#include "printResult.h"
#include "calculateResult.h"
#include "getUserInput.h"
#include "getMathOperation.h"

int main()
{
    double input1, input2, result = 0;
    int op = 0;

    input1 = getUserInput();
    op = getMathOperation();
    input2 = getUserInput();
    result = calculateResult(input1, input2, op);
    printResult(result);
    
}
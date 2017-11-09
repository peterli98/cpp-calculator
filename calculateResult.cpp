
double calculateResult(double input1, double input2, int op)
{   
    double result;
    if(op == 1)
    result = input1 + input2;
    else if(op == 2)
    result = input1 - input2;
    else if(op == 3)
    result = input1 * input2;
    else if(op == 4)
    result = input1 / input2;

    return result;
}
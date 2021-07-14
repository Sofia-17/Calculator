#include "Calculator.h"

 Calculator::Calculate(double x, char oper, double y)
{
    switch (oper){  //определяем тип операции
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y ;
        case '/':
            return x / y;   
        default:
            return 0.0;        

    }
        
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator = '\0';
    double num1 =0.0;
    double num2 =0.0;
    double result =0.0;

    printf("enter the first number: ");
    scanf("%lf", &num1);

    printf("enter the operator (+, -, *, /):");
    scanf(" %c", &operator);
    printf("enter the second number: ");
    scanf(" %lf", &num2);

    switch(operator){
    case '+':
    result = num1 + num2;
    break;
    case '-':
    result = num1 - num2;
    break;
    case '*':
    result = num1 * num2;
    break;
    case '/':
    result = num1 / num2;
    break;
    }
    printf("result: %.004lf", result);

    return 0;
}

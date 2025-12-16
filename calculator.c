#include<stdio.h>
int main() {
    
    char operator;
    float num1,num2,result;

    printf("Calculator\n");
    printf("Choose an operator:\n");
    printf("Addition: +\n");
    printf("Subtraction: -\n");
    printf("Multiplication: *\n");
    printf("Division: /\n");

    printf("Enter the operator: \n");
    scanf("%c",&operator);

    printf("Enter Two numbers: \n");
    scanf("%f%f",&num1,&num2);

    switch(operator) { 
        case '+':  //Addition Operation
        result = num1+num2;
        printf("Addition: %.2f",result);
        break;

        case '-':  //Subtraction Operation
        result = num1-num2;
        printf("Subtraction: %.2f",result);
        break;

        case '*':  //Multiplication Operation
        result = num1*num2;
        printf("Multiplication: %.2f",result);
        break;

        case '/':  //Division Operation
        if (num2 != 0) {
            result = num1+num2;
            printf("Division: %.2f",result);
        } else {
            printf("Division by Zero not Possible.");
        }
        break;

        default:
            printf("Invalid Operator");

    }

    return 0;

}
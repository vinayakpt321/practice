#include<stdio.h>

int main(){
	char operator;
	double num1,num,result;

	printf("Enter first number : ");
	scanf("%1f",&num1);
	printf("\n Enter second number : ") ;
	scanf("%1f",&num2);

	printf("select operator : (+,-,*,/)");
	scanf("%c",&operator);
	
	switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}



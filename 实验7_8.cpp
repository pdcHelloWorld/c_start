#include <stdio.h>
#include <stdlib.h>
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
int main() {
    float num1, num2, result;
    char choice;
    float (*calculator[4])(float, float) = {add, subtract, multiply, divide};
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter choice (+, -, *, /): ");
    scanf(" %c", &choice);
    printf("Enter second number: ");
    scanf("%f", &num2);
    switch (choice) {
        case '+':
            result = calculator[0](num1, num2);
            break;
        case '-':
            result = calculator[1](num1, num2);
            break;
        case '*':
            result = calculator[2](num1, num2);
            break;
        case '/':
            if (num2 != 0) {
                result = calculator[3](num1, num2);
            } else {
                printf("Error\n");
                return 1; 
            }
            break;
        default:
            printf("Error\n");
            return 1; 
    }
    printf("Result: %.2f\n", result);
    system("pause");
    getchar();
    return 0;
}
float add(float a, float b) {return a + b;}
float subtract(float a, float b) {return a - b;}
float multiply(float a, float b) {return a * b;}
float divide(float a, float b) {return a / b;}

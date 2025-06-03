#include <stdio.h>
#include <stdint.h>
#include "../inc/add.h"
#include "../inc/sub.h"
#include "../inc/mul.h"
#include "../inc/div.h"
#include "../inc/menu.h"

int main()
{
    int32_t num1, num2, result;
    int c;
    printf("\n\rIt's me, hi, I'm the calculator, it's me\n\r");
    while (1) {
        printCalculatorMenu();
        printf("Are you ready for it? Type your choice, let the games begin: ");
        scanf("%d", &c);

        if (c == 5) {
            printf("Never mind, I'll find... another calculator. Goodbye!\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        switch (c) {
            case 1:
                result = addition(num1, num2);
                printf("Result: %d + %d = %d\n", num1, num2, result);
                break;

            case 2:
                result = subtraction(num1, num2);
                printf("Result: %d - %d = %d\n", num1, num2, result);
                break;

            case 3:
                result = multiplication(num1, num2);
                printf("Result: %d * %d = %d\n", num1, num2, result);
                break;

            case 4:
                if (num2 == 0) {
                    printf("Division by zero error\n");
                } else {
                    result = division(num1, num2);
                    printf("Result: %d / %d = %d\n", num1, num2, result);
                }
                break;

            default:
                printf("Oops! You did it again — that choice doesn’t exist. Try again.\n");
                break;
        }
        printf("\n");
    }
    return 0;
}

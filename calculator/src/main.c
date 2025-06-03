#include <stdio.h>
#include "../inc/add.h"
#include "../inc/sub.h"
#include "../inc/mul.h"
#include "../inc/div.h"

void printCalculatorMenu();

int main() {
    int choice, a, b;

    while (1) {
        printCalculatorMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) break;

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        switch (choice) {
            case 1: printf("Result = %d\n", add(a, b)); break;
            case 2: printf("Result = %d\n", sub(a, b)); break;
            case 3: printf("Result = %d\n", mul(a, b)); break;
            case 4:
                if (b != 0)
                    printf("Result = %d\n", divide(a, b));
                else
                    printf("Error: Division by zero\n");
                break;
            default: printf("Invalid choice\n");
        }
    }

    return 0;
}

#include <stdio.h>
#include <unistd.h> // For sleep function

void print_result(double result) {
    printf("Calculating");
    for (int i = 0; i < 3; i++) {
        printf(".");
        fflush(stdout);
        sleep(1);
    }
    printf("\nResult: %.2lf\n", result);
}

int main() {
    char operator;
    double num1, num2, result;
    char choice;

    do {
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter two operands: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operator) {
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
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    printf("Error! Division by zero.\n");
                    continue;
                }
                break;
            default:
                printf("Error! Operator is not correct.\n");
                continue;
        }

        print_result(result);

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
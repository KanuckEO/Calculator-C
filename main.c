#include <stdio.h>
int main() {
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *, /,): ");
    scanf("%c", &operator);
    printf("Enter first factor: ");
    scanf("%lf", &first);
    printf("Enter second factor");
    scanf("%lf", &second);

    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
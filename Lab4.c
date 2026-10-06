#include <stdio.h>

int main()
{
    int a, b;
    char choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter an operator (+, -, *, /, %%): ");
    // Note the space before %c — this fixes the input skipping bug
    scanf(" %c", &choice);

    switch(choice)
    {
        case '+':
            printf("Addition = %d\n", a + b);
            break;
        case '-':
            printf("Subtraction = %d\n", a - b);
            break;
        case '*':
            printf("Multiplication = %d\n", a * b);
            break;
        case '/':
            if(b != 0)
                printf("Division = %d\n", a / b);
            else
                printf("Division by zero is not possible.\n");
            break;
        case '%':
            if(b != 0)
                printf("Modulus = %d\n", a % b);
            else
                printf("Modulus by zero is not possible.\n");
            break;
        default:
            printf("Invalid Operator.\n");
    }

    return 0;
}

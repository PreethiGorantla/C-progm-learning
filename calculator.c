
#include <stdio.h>
#include <math.h>

int main()
{
    int choice, n, i;
    float num1, num2, result;
    long long factorial;

    do
    {
        printf("\n===== ADVANCED CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square of a number\n");
        printf("6. Cube of a number\n");
        printf("7. Power of a number\n");
        printf("8. Square Root\n");
        printf("9. Factorial\n");
        printf("10. Percentage\n");
        printf("0. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Addition = %.2f", num1 + num2);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Subtraction = %.2f", num1 - num2);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Multiplication = %.2f", num1 * num2);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);

                if(num2 != 0)
                    printf("Division = %.2f", num1 / num2);
                else
                    printf("Cannot divide by zero!");
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%f", &num1);
                printf("Square = %.2f", num1 * num1);
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%f", &num1);
                printf("Cube = %.2f", num1 * num1 * num1);
                break;

            case 7:
                printf("Enter base and exponent: ");
                scanf("%f %f", &num1, &num2);
                printf("Power = %.2f", pow(num1, num2));
                break;

            case 8:
                printf("Enter a number: ");
                scanf("%f", &num1);

                if(num1 >= 0)
                    printf("Square Root = %.2f", sqrt(num1));
                else
                    printf("Square root of a negative number is not real.");
                break;

            case 9:
                printf("Enter a positive integer (0 to 20): ");
                scanf("%d", &n);

                if(n < 0 || n > 20)
                {
                    printf("Enter a number between 0 and 20.");
                    break;
                }

                factorial = 1;

                for(i = 1; i <= n; i++)
                    factorial = factorial * i;

                printf("Factorial = %lld", factorial);
                break;

            case 10:
                printf("Enter obtained marks and total marks: ");
                scanf("%f %f", &num1, &num2);

                if(num2 > 0)
                    printf("Percentage = %.2f%%", (num1 / num2) * 100);
                else
                    printf("Total marks must be greater than zero.");
                break;

            case 0:
                printf("Thank you for using the calculator!");
                break;

            default:
                printf("Invalid choice! Try again.");
        }

        printf("\n");

    } while(choice != 0);

    return 0;
}

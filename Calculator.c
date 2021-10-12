#include <stdio.h>

int main()
{

    int op, num1, num2, rep = 1;
    while(rep){
        printf("Enter two Numbers : ");
        scanf("%d%d", &num1, &num2);
        printf("Enter the operation you want to perform :\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("The Addition of %d and %d is %d", num1, num2, num1 + num2);
            break;
        case 2:
            printf("The Subtraction of %d and %d is %d", num1, num2, num1 - num2);
            break;
        case 3:
            printf("The Multiplication of %d and %d is %d", num1, num2, num1 * num2);
            break;
        case 4:
            printf("The Division of %d and %d is %.2f", num1, num2, (float)num1 / num2);
            break;
        default:
            printf("Invalid Choice! Please try again.");
        }
        printf("\n\nDo you want to calculate again?\nYes => 1\nNo => 0\n");
        scanf("%d", &rep);
    }
    return 0;
}

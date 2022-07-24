// Program for simple calculator
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float n1, n2 , result;
    char op;
    printf("Enter the first number:");
    scanf("%f", &n1);
    printf("Enter the operator:");
    scanf(" %c", &op);
    printf("Enter the second number:");
    scanf("%f", &n2);

    switch (op)
    {
    case '+':
        result = n1 + n2;
        printf("Result -> %0.1f + %0.1f = %0.1f", n1, n2, result);
        break;
    case '-':
        result = n1 - n2;
        printf("Result -> %0.1f - %0.1f = %0.1f", n1, n2, result);
        break;
    case '*':
        result = n1 * n2;
        printf("Result -> %0.1f * %0.1f = %0.1f", n1, n2, result);
        break;
    case '/':
        result = n1 / n2;
        printf("Result -> %0.1f / %0.1f = %0.1f", n1, n2, result);
        break;
    case '^':
        result = pow(n1, n2);
        printf("Result -> %0.1f ^ %0.1f = %0.1f", n1, n2, result);
        break;
    default:
        goto fail;
    }
    goto exit;
fail:
    printf("Fail.\n");
exit:
    return 0;
}

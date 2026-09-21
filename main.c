#include <stdio.h>

int main(void)
{
    int a, b;
    float result;

    printf("input a number: ");
    scanf("%d", &a);

    printf("input a number: ");
    scanf("%d", &b);

    result = (float)a / b;

    printf("Dividing result is %f\n", result);

    return 0;
}
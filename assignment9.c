#include <stdio.h>

int main(void)
{
    int num, temp, digit, sum = 0, digits = 0;
    int power, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0)
    {
        digit = temp % 10;
        power = 1;

        for (i = 1; i <= digits; i++)
        {
            power = power * digit;
        }

        sum = sum + power;
        temp /= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum, rem;
    sum = 0;

    printf("Enter an integer: \n");
    scanf("%d", &num);  

    while (num != 0)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        num /= 10;
    }

    printf("Reversed Number = %d\n", sum);
    return 0;
}

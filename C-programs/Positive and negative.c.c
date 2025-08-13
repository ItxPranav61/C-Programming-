#include <stdio.h>

int main() {
    int number1;

    printf("Enter any number: ");
    scanf("%d", &number1);

    if (number1 > 0) {
        printf("The number is positive.\n");
    } else if (number1 < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}

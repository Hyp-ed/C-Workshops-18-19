#include <stdio.h>

void swap(int* num1, int* num2)
{
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int num1, num2;

    // Get inputs for num1 and num2
    printf("Enter number 1:");
    scanf("%d", &num1);
    printf("Enter number 2:");
    scanf("%d", &num2);
    printf("\n");

    printf("number 1 = %d \n", num1);
    printf("number 2 = %d \n", num2);
    printf("\n");

    swap(&num1, &num2);
    printf("Magical swapping of pointers \n");
    printf("number 1 = %d \n", num1);
    printf("number 2 = %d \n", num2);

    return 0;
}
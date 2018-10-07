#include <stdio.h>

int main()
{
    char character = 'J';
    int integer = 1;
    float real = 10.2;
    long long biginteger = 1234564567ll;

    printf("Value of character = %c, Address of character = %u \n", character, &character);
    printf("Value of integer = %d, Address of integer = %u \n", integer, &integer);
    printf("Value of real = %f, Address of real = %u \n", real, &real);
    printf("Value of biginteger = %lld, Address of biginteger = %u \n", biginteger, &biginteger);

    return 0;
}
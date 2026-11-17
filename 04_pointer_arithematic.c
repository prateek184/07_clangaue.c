#include <stdio.h>
int main()
{
    // POINTER ARITHEMATIC USING INTEGER POINTER
    //     int a = 5;
    //     int *ptr = &a;
    //     printf("the address of a is %u\n", &a);
    //     printf("the address of a is %u\n", ptr);
    //     ptr++;
    //     printf("the value of ptr  is %u\n", ptr);
    // POINTER ARITHEMATIC USING character  POINTER
    char a = 5;
    char *ptr = &a;
    printf("the address of a is %u\n", &a);
    printf("the address of a is %u\n", ptr);
    ptr++;
    printf("The value of ptr is %u\n", ptr);
    return 0;
}
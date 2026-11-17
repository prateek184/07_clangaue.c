#include <stdio.h>
int main()
{
    int marks[5];
    printf("enter marks of 5 students\n");
    scanf("%d", &marks[0]);
    scanf("%d", &marks[1]);
    scanf("%d", &marks[2]);
    scanf("%d", &marks[3]);
    scanf("%d", &marks[4]);
    printf("marks 0 and marks 1 is %d and %d", marks[0], marks[1]);
    return 0;
}
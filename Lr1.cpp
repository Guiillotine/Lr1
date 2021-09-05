#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#define N 101
int main()
{
    char name[15];
    int a, b;
    printf(" Enter your name: ");
    scanf("%s", name);
    for (int i = 0; i < 5; i++)
    printf("\n Hello, %s!", name);
    printf("\n Enter a: ");
    scanf("%d", &a);
    printf("\n Enter b: ");
    scanf("%d", &b);
    printf(" a * b = %d", a*b);
    _getch();
}

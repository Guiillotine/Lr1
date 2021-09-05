#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#define N 101
int main()
{
    char name[15];
    printf(" Enter your name: ");
    scanf("%s", name);
    printf("\n Hello, %s!", name);
    _getch();
}

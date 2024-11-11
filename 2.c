/*Составить функцию, которая определяет наибольший общий делитель двух
натуральных и привести пример ее использования
https://younglinux.info/algorithm/euclidean

int nod(int a, int b)

Данные на входе: Два целых положительных числа
Данные на выходе: Одно целое число - наибольший общий делитель.*/

#include <stdio.h>

int nod(int a, int b)
{
    while (a != b)
    {
      (a > b) ? (a -= b) : (b -= a); 
    }
    return a;
}

int main(void)
{
    int numberA, numberB;
    scanf("%d %d", &numberA, &numberB);
    printf("%d", nod(numberA, numberB));
    return 0;
}
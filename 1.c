/*Когда создатель шахмат, древнеиндийский мудрец и математик Сисса бен
Дахир, показал своё изобретение Правителю страны, тому так понравилась
игра, что он позволил изобретателю право самому выбрать награду. Мудрец
попросил у Повелителя за первую клетку шахматной доски заплатить ему одно
зерно риса, за второе — два, за третье — четыре и т. д., удваивая количество
зёрен на каждой следующей клетке. Помоги повелителю сосчитать сколько
зерен на какой клетке лежит.

Необходимо составить функцию, которая определяет, сколько зерен попросил
положить на N-ую клетку изобретатель шахмат (на 1-ую – 1 зерно, на 2-ую – 2
зерна, на 3-ю – 4 зерна, …)

Данные на входе: Целое число от 1 до 64
Данные на выходе: Одно целое число. Количество зерен на данной
клетке.
*/

#include <stdio.h>
#include <stdbool.h>

typedef unsigned long long int ullint;

int enterCellNumber()
{
    int number;
    scanf("%d", &number);
    return number;
}

bool checkNumber(int cellNumber)
{
    return ((cellNumber >= 1) && (cellNumber <= 64));
}

ullint getRiceGrainsNumber(int cellNumber)
{
    ullint riceNumber = 1;
    for (int i = 1; i < cellNumber; i++)
    {
        riceNumber *= 2;
    }
    return riceNumber;
}

int main(void)
{
    int cell = enterCellNumber();

    if (checkNumber(cell))
    {
        ullint number = getRiceGrainsNumber(cell);
        printf("%llu", number);
    }
    else
    {
        printf("wrong number");
        return 0;
    }
        
    return 0;
}
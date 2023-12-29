#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL,"ru_RU.UTF-8");
	printf("Пример №1\n");
	printf("Введите два целых числа через пробел 4 5\n");
	int a,b,result;
	scanf("%d %d", &a,&b);
    result = a - b;
    printf("Данные на входе: %d %d\n", a,b);
    printf("Данные на выходе: %d - %d = %d\n", a,b,result);
    //----------------------------------------------------------------------------------
    printf("\nПример №2\n");
	printf("Введите два целых числа через пробел 100 49\n");
	int a1,b1,result1;
	scanf("%d %d", &a1,&b1);
    result1 = a1 - b1;
    printf("Данные на входе: %d %d\n", a1,b1);
    printf("Данные на выходе: %d - %d = %d\n", a1,b1,result1);
	return 0;
}
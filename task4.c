#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL,"ru_RU.UTF-8");
	printf("Пример №1\n");
	printf("Введите три целых числа через пробел 4 5 7\n");
	int a,b,c;
	float result;
	scanf("%d %d %d", &a,&b,&c);
    result = (float)(a + b + c)/3;
    printf("Данные на входе: %d %d %d\n", a,b,c);
    printf("Данные на выходе: (%d + %d + %d)/3 = %2.2f\n", a,b,c, result);
    //----------------------------------------------------------------------------------
    printf("\nПример №2\n");
	printf("Введите три целых числа через пробел 1 2 3\n");
	int a1,b1,c1;
	float result1;
	scanf("%d %d %d", &a1,&b1,&c1);
    result1 = (float)(a1 + b1 + c1)/3;
    printf("Данные на входе: %d %d %d\n", a1,b1,c1);
    printf("Данные на выходе: (%d + %d + %d)/3 = %2.2f\n", a1,b1,c1,result1);
	return 0;
}
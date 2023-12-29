#include <stdio.h>
#include <locale.h>

int main (void)
{
    setlocale(LC_ALL,"ru_RU.UTF-8");
	printf("Пример №1\n");
	printf("Введите три целых числа через пробел 1 2 3\n");
	int a,b,c,sum,result;
	scanf("%d %d %d", &a,&b,&c);
    sum = a + b + c;
    result = a * b * c;
    printf("Данные на входе: %d %d %d\n", a,b,c);
    printf("Данные на выходе: %d + %d + %d = %d\n", a,b,c,sum);
    printf("Данные на выходе: %d x %d x %d = %d\n", a,b,c,result);
    //----------------------------------------------------------------------------------
    printf("\nПример №2\n");
	printf("Введите три целых числа через пробел 4 5 7\n");
	int a1,b1,c1,sum1,result1;
	scanf("%d %d %d", &a1,&b1,&c1);
    sum1 = a1 + b1 + c1;
    result1 = a1 * b1 * c1;
    printf("Данные на входе: %d %d %d\n", a1,b1,c1);
    printf("Данные на выходе: %d + %d + %d = %d\n", a1,b1,c1,sum1);
    printf("Данные на выходе: %d x %d x %d = %d\n", a1,b1,c1,result1);
	return 0;



}
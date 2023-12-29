#include <stdio.h>
#include <locale.h>

int main (void)
{
	setlocale(LC_ALL,"ru_RU.UTF-8");
	printf("Пример №1\n");
	printf("Введите трехзначное целое положительное число\n");
	int result;
	scanf("%d", &result);
    int a = result%10;
    int b = (result/10)%10;
    int c = (result/100)%10;
    int result1 = a * b * c;
    printf("Данные на входе: %d\n", result);
    printf("Данные на выходе: %d * %d * %d = %d\n", c,b,a,result1);
	return 0;
}
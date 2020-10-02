#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	long double max = 0;
	long double y = 0;
	printf("%d\n\r", sizeof(y));


	  for (int i = 1; i <= 10; i = i + 1) {
		printf("vvedite chislo nomer %d ", i);
	    scanf("%lf", &y);

		if (y <= 0) {
			y = y * (-1);
		}
		if (max <= 0) {
			max = max * (-1);
		}
		if (max < y) {
			max = y;
		}

	}
	printf("otvet %.10lf \n", max);
	return 0;
}

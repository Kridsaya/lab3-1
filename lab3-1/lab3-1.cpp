#include<stdio.h>

int main()
{
	int num, x, sum = 0;
	printf("Enter number : ");
	scanf_s("%d", &num);
	while (num > 9)
	{
		sum = 0;
		while (num > 0)
		{
			x = num % 10;
			num = num / 10;
			sum = sum + x;
		}
		num = sum;
		printf("%d \n", sum);
	}
	return 0;
}
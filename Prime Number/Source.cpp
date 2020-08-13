#include<stdio.h>

int main()
{
	int i,input,count=0;
	scanf_s("%d", &input);
	if (input <= 0)
	{
		printf("Error");
		return 0;
	}
	for (i = 2; i <= input; i++)
	{
		if (input % i == 0)
		{
			count++;
		}
	}
	if (count != 1)
		printf("It isn't Prime Number");
	else
		printf("It is Prime Number");
	return 0;
}
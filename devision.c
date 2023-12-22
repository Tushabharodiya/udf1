#include<stdio.h>
void division(int n)
{
	if(n%3==0 && n%5==0)
	{
		printf("3 & 5 Both Are Divisible");
	}
	else
	{
		printf("3 & 5 Both Are Not Divisible");
	}
}

void main()
{
	int n;
	printf("Enter Value N = ");
	scanf("%d",&n);
	division(n);
}
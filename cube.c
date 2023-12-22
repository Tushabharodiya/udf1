#include<stdio.h>

void cube(int n)
{
	printf("Cube Of N = %d ",n*n*n);
}

void main()
{
	int n;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	cube(n);
	
}
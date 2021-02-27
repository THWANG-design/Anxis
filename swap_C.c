#include<stdio.h>
void swap(int *x, int *y);
void main()
{
	int a, b;
	int *p1, *p2;
	puts("put two interger");
	scanf_s("%d %d", &a, &b);
	p1 = &a;
	p2 = &b;
	printf("The number you have put is : %d, %d", *p1, *p2);
	swap(p1, p2);
	printf("The swap number is : %d, %d", a, b);
}
void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
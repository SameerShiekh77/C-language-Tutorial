#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("\nEnter second number: ");
	scanf("%d", &b);
	printf("\n===========BITWISE OPERATORS==========\n");
	printf("a & b value is: %d\n", a & b);
	printf("a | b value is: %d\n", a | b);
	printf("a ^ b value is: %d\n", a ^ b);
	
	return 0;
	getch();
}

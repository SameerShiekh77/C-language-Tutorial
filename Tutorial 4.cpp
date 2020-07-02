#include <stdio.h>
#include <conio.h>

int main()
{
//	0 is equal to false
//	1 is equal to true
	
	int a,b;
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Is eqaul to: %d\n", a == b);
	printf("Is not eqaul to: %d\n", a != b);
	printf("Is greater than: %d\n", a > b);
	printf("Is less than: %d\n", a < b);
	printf("Is greater or eqaul to: %d\n", a >= b);
	printf("Is less or eqaul to: %d\n", a <= b);
	return 0;
	getch();
}

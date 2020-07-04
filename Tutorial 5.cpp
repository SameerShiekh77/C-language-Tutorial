#include <stdio.h>
#include <conio.h>

int main()
{
	int age,height;
	printf("Enter age: ");
	scanf("%d", &age);
	printf("Enter height: ");
	scanf("%d", &height);
	printf("==========LOGICAL OPERATORS==========");
	if(!(age >= 18 && height >= 6))
	{
		printf("\nJOIN");
	}
	
	return 0;
	getch();
}


#include <stdio.h>
#include <conio.h>

int main()
{
	int age;
	int height;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Enter your height: ");
	scanf("%d ", &height);
	
//	if(condition)
//	{
		//Statement
//	}
/*
	else
	{
	statement	
	}
*/

//	if(condition)
//	{
		//Statement
//	}
/*
	else if(condition)
	{
	statement	
	}
	else if(condition)
	{
	Statement
	}
	else{
	statement
	}
	

*/


	if(age > 18)
	{
		printf("You can drive");
		if(height >= 5)
		{
			printf("\nYou can drink");
		}
	}
	else if(age == 18)
	{
		printf("You need to licence for drive");
	}
	else
	{
		printf("Sorry! you can not drive a car");
	}
	
	
	getch();
}

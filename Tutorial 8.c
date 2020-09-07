#include <stdio.h>
#include <conio.h>

int main()
{
	int age;
	float height;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Enter your height: ");
	scanf("%.2f", &height);
	
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


	if(age >= 18 || height >= 5.2)
	{
		printf("You are selected");
	}
	else
	{
		printf("Sorry! you are not selected");
	}
	
	
	getch();
}

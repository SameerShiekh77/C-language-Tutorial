#include <stdio.h> // preprocessor command or pre-processing operator
#include <conio.h> //liaburay

int main() //function 
{
	//This is comment ignore this line
	
	//DATA TYPES
	/*1. integear = int
	2. character = char
	3. floating = float 
	*/
	
	int num = 70; //; is eqaul to terminator it is very important
	char alpha = 'd';
	float decimal = 787.484;
	
	/*
	FORMAT SPECIFER
	%d use for integer
	%c use for character
	%f use for flaoting
	*/
	
	
	printf("How to use format specifier: %d\n%c\n%.1f", num,alpha,decimal); // \n means new line
//	printf("This is a character: %c\n", alpha);
//	printf("This is a floating number: %f\n", decimal);
	
	getch();
	
}


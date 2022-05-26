//Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to 
//convert this temperature into Centigrade degrees

#include<stdio.h>
int main()
{
float fa ,ce;
printf("fa degress:");
scanf("%f",&fa);
ce=	(fa-32)*5/9;
printf("%f",ce);
	
	
	
	
	return 0;
}

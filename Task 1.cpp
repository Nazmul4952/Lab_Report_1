/*Niloys basic salary is input through the keyboard. His dearness allowance is 40% of his basic 
salary and house rent is 20% of his basic salary. Write a program to calculate his gross salary.*/
#include<stdio.h>
int main()
{
	
double basic_salary, dearness_allowance, house_rent , gross_salary;
printf(" Enter the gross salary :");
scanf( " %lf", & basic_salary);
dearness_allowance=.4* basic_salary;
house_rent = .2* basic_salary;
gross_salary= basic_salary-dearness_allowance- house_rent;
printf(" %lf", gross_salary);

return 0;	
}

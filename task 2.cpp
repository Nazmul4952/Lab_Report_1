/* The distance between Mirpur and Ashulia is input through the keyboard. Write a program to 
convert and print this distance in meter, feet, inches and centimeters.*/
#include <stdio.h>
int main()
{   
float km,meter,feet,inc,centi;
printf("distance mirpur to ashulia:");
scanf ("%f",&km);
meter=km*1000; 
	feet=km*3280.8399; 
	inc=km*39370.078; 
	centi=km*100000; 
printf("%f\n",km);
printf("%f\n ",meter);
printf("%f\n",feet);
printf("%f\n",inc);
printf("%f\n",centi);

return 0;
}


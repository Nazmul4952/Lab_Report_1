/*12. If the total selling price of 15 items and the total profit earned on them is input through the 
keyboard, write a program to find the cost price of one item.*/

#include<stdio.h>
int main()
{ 
int selling_price,total_profit,cost_price;
double one_item;

printf("Enter selling price 15 items:");
scanf("%d",&selling_price);
 
 printf("Enter the total profit:");
 scanf("%d",&total_profit);
 cost_price=selling_price- total_profit;
 
 one_item=cost_price/15;
 printf("cost one item =%lf",one_item);
 
 
	
	
	
	return 0;
}

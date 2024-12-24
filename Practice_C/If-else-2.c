//Write a C program to find the largest of three numbers using if-else statement.
#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,num3;//Decraling 3 varible for numbers
	
	printf("Provide me a number : ");
	scanf("%d",&num1);//taking input for num1 from user
	
	printf("Provide me a number : ");
	scanf("%d",&num2);//taking input for num2 from user
	
	printf("Provide me a number : ");
	scanf("%d",&num3);//taking input for num3 from user
	
	if(num1>num3 && num1>num2){//checking condition is num1 is greater than all or not 
		printf("The Largest Amoung all is %d.",num1);
	}
	else if (num2>num3 && num2>num1){//cheking that is num2 is greater than all or not
		printf("The largest number amoung all is %d.",num2);
	}
	else{//printf num3 as greatest 
		printf("The largest number aoung all is %d.",num3);
	}
}

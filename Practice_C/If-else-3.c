//Write a C program to check whether a given year is a leap year or not using if-else statement.
#include<stdio.h>
#include<conio.h>
int main(){
	int year;//decalring a variable for storing year 
	
	printf("Enter a year : ");
	scanf("%d",&year);//taking input from user of a year
	
	if(year%4==0){//checking condition is year in dividing and getting reminder 0.if yes than it is a leap year.
		printf("the year %d is a leap year.",year);
	} 
	else{//if no than the year is not a leap year.
		printf("the year %d is not a leap year.",year);
	}
}

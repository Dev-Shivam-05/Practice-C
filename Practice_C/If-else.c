// Write a C program to check whether a given number is positive, negative, or zero using an if-else statement
#include<stdio.h>
#include<conio.h>
int main(){
	int num;//Decalring Num
	
	printf("Provide Me A Number : ");
	scanf("%d",&num);//Taking input for num from user
	
	if(num>0){//if num is greater than zero than it is positive 
		printf("The Inputed Number %d Is Positive.",num);
	}
	else if(num<0){//if num is smaller that zero than it is negatie 
		printf("The Inputed Number %d Is Negative.",num);
	}
	else {//if none codition is true than it is zero
		printf("The Inputed Number %d Is Zero.",num);
	}
}

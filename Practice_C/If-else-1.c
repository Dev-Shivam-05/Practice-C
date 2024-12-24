//Write a C program to check whether a given number is even or odd using if-else statement.
#include<stdio.h>
#include<conio.h>
int main() {
	int num;//declaring num
	
	printf("Provide me a Number : ");
	scanf("%d",&num);//taking input of num from user 
	
	if(num%2==0){//checking is num is divided by 2 and gets remider 0. if yes than it is even. 
		printf("The Inputed Number %d Is Even.",num);
	}
	else{//if first conditon is not true than prining the number is Odd.
		printf("The Inputed Number %d Is Odd.",num);
	}
}

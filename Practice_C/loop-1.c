//Write a C program that prints the first n even numbers using a for loop.
#include<stdio.h>
#include<conio.h>
int main(){
	int num;//declaring a variable for storing a value.
	int i;//decraling a variable for using in loops.
	printf("Provide me a number : ");
	scanf("%d",&num);//taking input from user of a number/
	
	for(i=1; i<=num; i++){//unsing loop for staring the sequence
		if(i%2==0){//checking is i divide by 2 gets remineder 0 or not is is than it is even.
			printf("%d\n",i);
		}
	}
}

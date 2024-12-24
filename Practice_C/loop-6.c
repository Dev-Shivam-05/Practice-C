//Write a C program to print the following pattern
//12345
//23456
//34567
//45678
//56789
#include<stdio.h>
#include<conio.h>
int main(){
	int i,j;
	
	for(i=1; i<=5; i++){
		for(j=i; j<=5+i-1; j++){
			printf("%d",j);
		}
		printf("\n");
	}
}

//Write a C program to print the following pattern for a given number n using loops.
#include<stdio.h>
#include<conio.h>
int main(){
	int row;
	int i,j;
	
	printf("Provide me how many rows do yu want : ");
	scanf("%d",&row);
	
	for(i=1; i<=row; i++){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}

//Write a C program to search for a given element in a given array.
#include<stdio.h>
#include<conio.h>
int main() {
	int i ,s,n;
	
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	int arr[100];
	
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	printf("enter which element do you want : ");
	scanf("%d",&s);
	for(i=0; i<n; i++){
		if(arr[i]==s){
			printf("the inputed arr[%d] = %d",i,arr[i]);
		}
	}
//	printf("The Number not found");
}

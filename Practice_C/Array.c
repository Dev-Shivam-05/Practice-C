//Write a C program to find the maximum and minimum elements in a given array.
#include<stdio.h>
#include<conio.h>
int main(){
	int size;//taking variable for storing array size.
	int i;//taking a variable for uning in loops.
	
	printf("Enter Array Size : ");
	scanf("%d",&size);//takinig input from user for array size.
	
	int arr[size];
	
	for(i=0; i<=size-1; i++){
		printf("Enter The Element of Array[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0; i<=size; i++){
		if(arr[i]>arr[i+1]){
			printf("gdfds");
		}
	}
}

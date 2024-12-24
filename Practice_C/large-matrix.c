#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,row,column; //declaring varibles for array and unding in loops
	
	printf("Enter The Size Of Row : ");
	scanf("%d",&row);// taking  innput frorm user for row size
	
	printf("Enter The Size Of Column : ");
	scanf("%d",&column);// taking  innput frorm user for row size
	
	int arr[row][column];// declaring array
	
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("Enter the Value Of Array[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The Given Array Is :- \n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");	
	}
	int largest = arr[0][0];// declaring a variable for continue process
	for(i==0; i<row; i++){
		for(j=0; j<column; j++){
			if(arr[i][j]>largest){
				largest = arr[i][j];
			}
		}
	}
	
	printf("The Largest Amoung all is : %d.",largest);
}


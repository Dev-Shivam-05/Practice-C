#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,row,column;
	
	printf("Enter The Size Of The Row : ");
	scanf("%d",&row);
	
	printf("Enter The Size Of The Column : ");
	scanf("%d",&column);
	
	int arr[row][column];
	int arr1[row][column];
	int arr2[row][column];
	
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("Enter The element of arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d",arr[i][j]);	
		}
	printf("\n");
	}
	
	
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("Enter The element of arr[%d][%d] = ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d",arr1[i][j]);	
		}
	printf("\n");
	}
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			arr2[i][j]=arr[i][j]+arr1[i][j];	
		}
	}
	printf("\n");
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d",arr2[i][j]);	
		}
		printf("\n");
	}
}

#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,row,column,row_sum=0,col_sum=0;
	
	printf("Enter The Size Of Row : ");
	scanf("%d",&row);
	
	printf("Enter The Size of Column : ");
	scanf("%d",&column);
	
	int arr[row][column];
	
	for(i=0; i< row; i++){
		for(j=0; j<column; j++){
			printf("Enter The Value Of Array[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter a Row : ");
	scanf("%d",&row);
	printf("Enter a Column : ");
	scanf("%d",&column);
	
	for(j=0; j<row; j++){
		printf("\n%d",arr[row][j]);
	}
	for(i=0; i<column; i++){
		printf("\n%d",arr[i][column]);
	}
	
	
	for(j=0; j<=column; j++){
		row_sum += arr[i][j];
	}
	for(i=0; i<=row; i++){
		col_sum += arr[i][j];
	}
	
	printf("\nThe Sum Of Row Is = %d",row_sum);
	
	printf("\nThe Sum Of Column Is = %d",col_sum);
	
}

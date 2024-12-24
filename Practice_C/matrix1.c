#include<stdio.h>
#include<conio.h>
void main() {
	int i,j,sum=0,sum1=0,row,column;
	
	printf("Enter teh size of the row : "); 
	scanf("%d",&row);
	
	printf("Enter The Sze Of The Cmumn : ");
	scanf("%d",&column);
	
	int arr[row][column];
	
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("Enter The Value Of The Array[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
		for(i=0; i<row; i++){
			for(j=0; j<column; j++){
				printf(" %d ",arr[i][j]);
			}
			printf("\n");
		}
		for(i=0; i<row; i++){
			for(j=0; j<column; j++){
				if(i==0 && j==0 || i==1 && j==1){
					sum+=arr[i][j];
					printf("%d",sum);
				}
				printf("\n");
			}
		}
	
}

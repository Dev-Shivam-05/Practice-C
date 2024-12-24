//Write a C program to find the sum of all the elements in a given array
#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,size,sum=0;//decariling variable for storing data
	printf("Enter the Array Size : ");
	scanf("%d",&size);//taking input from user of the size of the array
	
	int arr[100];//declaring array
	
	for(i=0; i<size; i++){
//		printf("Give mme the value of arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<=size; i++){
		sum+=arr[i];
	}
	printf("%d\n",sum);
	return 0;
	
}
//#include <stdio.h>
//int main() {
//    int arr[100], n, i, sum = 0;
//    printf("Enter the number of elements: ");
//    scanf("%d", &n);
//    printf("Enter the elements:\n");
//    for (i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++) {
//        sum += arr[i];
//    }
//    printf("The sum of the array elements is: %d\n", sum);
//    return 0;
//}

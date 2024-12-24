#include<stdio.h>
#include<conio.h>
void swap(int x, int y)
{ 
	int temp; 
	temp=x;
	x=y;
	y=temp;
	printf("\nAfter Swaping The Value Of A=%d B=%d",x,y);
}
int main(){
	int a,b; // declaring variable 
	
	printf("Enter A NUmber : ");
	scanf("%d",&a);
	
	printf("Enter A Numeber : ");
	scanf("%d",&b);
	
	printf("Before Swaping the Value Of A = %d And B = %d.\n",a,b);
	
	swap (a, b);
	
	return 0; 
}


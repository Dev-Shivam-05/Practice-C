#include<stdio.h>
#include<conio.h>
void main (){
	float cel,reh,feh;
	
	printf("Enter The Celsius : ");
	scanf("%f",&cel);
	
	reh=(cel * 9/5) + 32;
	
	printf("The Celsius is %.2f  Converted in Fehrhanite : %.2f",cel,reh);
	getch();
}

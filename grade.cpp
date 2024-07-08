#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	n<=100 && n>80 ? printf("Your grade is A. Excellent work!"):(n<=80 && n>60 ? printf("Your grade is b"):n<=60 && n>40 ? printf("Your grade is C"):n<=40 && n>20 ? printf("Your grade is D"):printf("Your grade is F"));
	
	
	getch();
}


//Develop a Program to count the total number of digits in a number.

#include<stdio.h>
#include<conio.h>

main()
{
	int n,count=0;
	printf("Enter the number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		count++;
		
	}
	printf("Total No. is %d",count);
}

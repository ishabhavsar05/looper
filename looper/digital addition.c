//Develop a Program to find the sum of a number's first and last digits.

#include<stdio.h>
#include<conio.h>

main()
{
	int num,firstdigit,lastdigit,sum;
	
	printf("enter any number:");
	scanf("%d",&num);
	
	lastdigit=num%10;
	
	while(num >=10)
	{
		num /=10;
	}
	
	firstdigit=num;
	
	sum=firstdigit + lastdigit ;
	printf("sum is %d",sum);
	
}

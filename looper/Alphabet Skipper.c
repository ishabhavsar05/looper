//Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a
//do-while loop

#include<stdio.h>
#include<conio.h>

main()
{
	char alphabet='a';
	
	do{
		printf("%c ",alphabet);
		alphabet+=4;
	}while(alphabet<='z');
	
	
	
}

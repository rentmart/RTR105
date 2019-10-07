#include <stdio.h>

void main()
{
	char a=100;
	printf("Operacija ++: %d++1 rezultats %d\n",a,a++);

	char b=100;
	printf("Operacija --: %d--1 rezultats %d\n",b,b--);

	char c=100;
	printf("Operacija +: %d+45 rezultats %d\n",c,c+45);

	char d=155;
	printf("Operacija !: %d+!100 rezultats %d\n",d,d+!100);

	char e=155;
	printf("Operacija \%: %d%50 rezultats %d\n",e,e%50);

	char f=100;
	printf("Operacija &: %d&50 rezultats %d\n",f,f&50);

	char g=155;
	printf("Operacija ||: %d||50 rezultats %d\n",g,g||50);

}


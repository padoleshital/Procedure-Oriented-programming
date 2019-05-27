#include<stdio.h>

typedef unsigned long int ulong;

ulong Factorial(int ino)
{
	int fact=1;

	if(ino<0)
	{
		ino=-ino;
	}
	while(ino!=0)
	{
		fact=fact*ino;
		ino--;
	}
	return fact;
}

int main()
{
	ulong uRet=0;
	int ivalue=0;

	printf("Enter Number");
	scanf("%d",&ivalue);

	uRet=Factorial(ivalue);
	printf("%d is a factorial ",uRet);
	return 0;
}
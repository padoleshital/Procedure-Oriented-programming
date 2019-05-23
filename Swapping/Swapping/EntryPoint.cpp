#include<stdio.h>
//Write a program which accept two number from user swapping of that number without using third variable(temp)

int main()
{
	int x=0,y=0;
	printf("Enter value of x:");
	scanf("%d",&x);

	printf("Enter value of y:");
	scanf("%d",&y);

	if(x>=0 && y>=0)
	{
		x = x + y;
		y = x - y;
		x = x - y;

	}
	printf("After Swapping value of x: %d \n value of y: %d",x,y);

	return 0;
}
#include<stdio.h>
int main()
{
	int a;
	printf("enter your number:->");
	scanf("%d",&a);
	if(a%5==06 ||a%3==0)
	{
		printf("%d is divided by 3 or 5",a);
	}
	else
	{
		printf("number is not divided  by 3 or 5");
	}
}

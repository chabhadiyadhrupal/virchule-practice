//chack number is divided by 5 and 3
#include<stdio.h>

int main()
{
	int a;
	printf("enter your number:->");
	scanf("%d",&a);
	if(a%3==0&&a%5==0)
	{
		printf("%d is divided by 3 and 5",a);
		
	}
	else{
	printf("not divided to 3 and 5");
	}
}

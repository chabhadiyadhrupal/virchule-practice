//chack number is divided by 5 and 3
#include<stdio.h>

int main()
{
	int a;
	printf("enter your number:->");
	scanf("%d",&a);
	if(a%3==0||a%5==0)
	{
		if(a%15!=0)
		printf("%d is divided by 3 or 5 but not divided by 15",a);
		 else
		 {
		 	printf("%d is divided bt 3 or 5",a);
		 }
	}
	else{
	printf("not divided to 3 and 5");
	}
}

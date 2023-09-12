#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter your number:->");
	scanf("%d%d%d",&a,&b,&c);
	 if (b>a&&c>a)
	{
		printf("young :->%d ",a);
		
	}
	 else if(a>b&&c>b)
	{
		printf("young is :->%d",b);
	}
	else 
	{
		printf("young is:->%d",c);
	}
	
}

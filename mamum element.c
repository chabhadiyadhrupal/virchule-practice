#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" three nuber enter:->");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		printf(" max %d",a);
		
	}
	else if(a>c)
	{
		printf(" max %d",a);
		
	}
	else if(b>c)
	{
		printf(" max %d",b);
		
	}
	else
	{
		printf("max %d",c);
		
	}
}

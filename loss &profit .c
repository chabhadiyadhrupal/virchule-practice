#include<stdio.h>
int main()
{
	int sell;
	int price;
	printf("enter your cost price:->");
	scanf("%d",&price);
	printf("enter your selling price:->");
	scanf("%d",&sell);
	if(sell>price)
	{
		printf("profit");
		
	}
	else
	{
		printf("loss");
		
	}
}

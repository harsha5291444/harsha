#include<stdio.h>
int main()
{
	int i,n,tv,r;
	printf("enter the values : ");
	scanf("%d",&n);
	scanf("%d",&tv);
	for(i=1;i<=n;i++)
	{
		r=i*tv;
		printf("%d*%d=%d \n",i,tv,r);
	}
}

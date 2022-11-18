#include<stdio.h>
#include<conio.h>

void main()
{
	int a[2][2],b[2][2],c[2][2];
	int i,j,k,sum=0;


	printf("--------A-------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("---------B---------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("-------Print - A --------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("---------Print - B--------\n");

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	printf("-----Multiplication--------\n");
	
	for(i=0;i<2;i++)
	{
			for(j=0;j<2;j++)
			{
					for(k=0;k<2;k++)
					{
						//a[0][0] * b[0][0];
						
						sum = sum + a[i][k] * b[k][j];
					}
					c[i][j] = sum;
					sum=0;
			}
	}
	for(i=0;i<2;i++)
	{
			for(j=0;j<2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
	}
	
}
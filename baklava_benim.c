#include<stdio.h>
int main()
{
	int i,j;
	int art=1;
	for (i=1;i<7;i++)
	{
		for (j=1;j<7;j++)
		{
			if (i>=j)
			printf("t");
			
			for (j=1;j<=art;j++){
			printf("*");
			art+=2;
		}
		}
			printf("\n");
	}
}

#include<stdio.h>
void fac(int n)
{
	int i,j;
	for (i=1;i<n+1;i++)
	{
	for (j=1;j<n+1;j++)
	{   
	if (i>=j)
	
		printf("%d",j);
	
    }
    	printf("\n");
}
	
}
int main()
{
	int n;
	printf("dýþardan bir n sayýsý giriniz=");
	scanf("%d",&n);
	printf("\n**dizimiz**\n");
	fac(n);
}

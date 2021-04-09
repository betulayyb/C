#include<stdio.h>

int main()
{
	int a,b,toplam;
	printf("a gir=");
	scanf("%d",&a);
	printf("b gir=");
	scanf("%d",&b);
	toplam=topla(a,b);
	printf("A+B=%d",toplam);
}
	int topla(int a,int b)
{
	return(a+b);
}


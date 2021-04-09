#include<stdio.h>
int main()
{
	int i,a,dizi[5]={4,5,6,7,8},dizi_[5];
	printf("bir sayý giriniz=");
	scanf("%d",&a);
	for (i=0;i<5;i++)
{
		if (dizi[i]==a)
		printf("sýra no:%d",i+1);
}
}

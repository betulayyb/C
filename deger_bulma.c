#include<stdio.h>
int main()
{
	int i,a,dizi[5]={4,5,6,7,8},dizi_[5];
	printf("bir say� giriniz=");
	scanf("%d",&a);
	for (i=0;i<5;i++)
{
		if (dizi[i]==a)
		printf("s�ra no:%d",i+1);
}
}

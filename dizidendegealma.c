#include<stdio.h>
int main()
{
	int dizi[5]={6,43,5,6,7};
	int n,i;
    printf("n degerini giriniz=");
    scanf("%d",&n);
	for (i=0;i<5;i++)
	if (dizi[i]==n)
	{
	printf("dizi no=%d\n",i+1);
    }
	printf("aradiginiz deger=%d\n",n);
if(dizi[i]!=n)
	{
		printf("girdilerde %d degeri yoktur.",n);
	}
}

#include<stdio.h>
int main()
{
int i,no;
char ad_soyad[30];
	for (i=1;i<10;i++){
	printf("ad soyad giriniz=");
	gets(ad_soyad);
	printf("\tgirdiginiz ad soyad=");
	puts(ad_soyad);
	printf("\togrencinin notu:");
	scanf("%d\n",&no);
	return 0;
}
}

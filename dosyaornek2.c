#include<stdio.h>
int main()
{
	FILE *PNRliste;
	char ad_soyad[50];
	int no,i;
	PNRliste=fopen("deneme","w");
	for (i=1;i<10;i++){
	printf("%s. kisinin ad soyad giriniz=",i);
	gets(ad_soyad);
	printf("\t%d.girdi�iniz ad soyad=",i);
	puts(ad_soyad);
	printf("\t%d.�grencinin notu:",i);
	scanf("%d\n",&no);
	fprintf(PNRliste,"ogrencinin ad�=%s ,�grencinin notu=%d",ad_soyad,no);
}
	fclose(PNRliste);
	return 0;
}

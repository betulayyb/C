#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[]="merhaba!";
	char b[23]="nasýlsýn";
	char isim[30], soyisim[30];
	printf("En fazla 30 karakter girebilirsiniz!");
	printf("\n isim soyisim giriniz=");
	scanf("%s %s",isim,soyisim);
	char hava[100];
	printf("1. soru= \n");
	gets(hava);
	printf("\n");
	puts(hava);
	return 0;
}

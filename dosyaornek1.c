#include<stdio.h>
int main()
{
	FILE *ptr_dosya=NULL;
	int i;
	ptr_dosya=fopen("text.txt",	"w");
	if (ptr_dosya!=0)
	printf("dosya a��ld�");
	else 
	printf("dosya ac�lmad�");
	for(i=1;i<10;i++)
	fprintf(ptr_dosya,"\n%d",i);
	fclose(ptr_dosya);
}

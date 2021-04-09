#include<stdio.h>
 main()
{
	char a;
	FILE *pt;
	pt=fopen("beti.txt","r");
	while(!feof(pt))
	{
		a=getc(pt);
		printf("\n%c",a);
	}
}

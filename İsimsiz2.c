#include<stdio.h>
main ()
{
	int i,sayi;
	printf("asal mi degil mi ogrenmek istediginiz sayiyi yaziniz=%d\t ");
	scanf("%d\n",&sayi);
	for (i=2;i<sayi;i++)
	if (sayi%i==0)
	{
		printf("asal say�\n");
	}
	else 
	{
		printf("asal de�il\n");
	}
}

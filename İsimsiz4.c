#include<stdio.h>
main()
{
	int yas;
	printf("istediginiz sayiyi giriniz=");
	scanf("%d",&yas);
	if(18<yas&&65>yas)
	printf("yas 18-65 arasindadir\nyas=%d\n",yas);
	else
	printf("yas 18-65 arasinda degildir\nyas=%d\n",yas);
}

#include<stdio.h>
main()
{
	int sayi,bolen,kalan;
	printf("KALAN BULMA\n");
	printf("Bolunecek sayýyý giriniz:");// 14 yazýn
	scanf("%d",&sayi);
	printf("bolen sayýsýný giriniz=");// 4 yazýn
	scanf("%d",&bolen);
	kalan=sayi%bolen; // Kalan bulma operatorü % dýr
	printf("%d nin %d ye bolumunden kalan:%d",sayi,bolen,kalan);
	getch();

}

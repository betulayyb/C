#include<stdio.h>
main()
{
	int sayi,bolen,kalan;
	printf("KALAN BULMA\n");
	printf("Bolunecek say�y� giriniz:");// 14 yaz�n
	scanf("%d",&sayi);
	printf("bolen say�s�n� giriniz=");// 4 yaz�n
	scanf("%d",&bolen);
	kalan=sayi%bolen; // Kalan bulma operator� % d�r
	printf("%d nin %d ye bolumunden kalan:%d",sayi,bolen,kalan);
	getch();

}

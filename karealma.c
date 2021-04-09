#include<stdio.h>
int kare_alma(int sayi)
{
      int sonuc;
      sonuc=sayi*sayi;
      return(sonuc);
}
main()
{
      int A;
      int Hesapla;
      printf("karesini istediðiniz sayýyý giriniz=");
      scanf("%d",&A);
      Hesapla=kare_alma(A);
      printf("sonuc=%d",Hesapla);
}

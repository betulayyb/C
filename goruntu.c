#include<stdio.h>
main()
{
      float sayi1,sayi2,topla,cikar,carp,bol;
      printf("1.sayýyý giriniz="); scanf("%d",&sayi1);
      printf("2.sayýyý giriniz=");scanf("%d",&sayi2);
      topla=sayi1+sayi2;
      cikar=sayi1-sayi2;
      carp=sayi1*sayi2;
      bol=sayi1/sayi2;
      printf("girilen ikii sayýnýn toplamý=%d",topla);
      printf("girilen ikii sayýnýn farký=%d",cikar);
      printf("girilen ikii sayýnýn carpýmý=%d",carp);
      printf("girilen ikii sayýnýn bölümü=%d",bol);
      printf("%f+%f=%f\n",sayi1,sayi2,topla);
      printf("%f+%f=%f\n",sayi1,sayi2,cikar);
      printf("%f+%f=%f\n",sayi1,sayi2,carp);
      printf("%f+%f=%f\n",sayi1,sayi2,bol);
}

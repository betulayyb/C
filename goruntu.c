#include<stdio.h>
main()
{
      float sayi1,sayi2,topla,cikar,carp,bol;
      printf("1.say�y� giriniz="); scanf("%d",&sayi1);
      printf("2.say�y� giriniz=");scanf("%d",&sayi2);
      topla=sayi1+sayi2;
      cikar=sayi1-sayi2;
      carp=sayi1*sayi2;
      bol=sayi1/sayi2;
      printf("girilen ikii say�n�n toplam�=%d",topla);
      printf("girilen ikii say�n�n fark�=%d",cikar);
      printf("girilen ikii say�n�n carp�m�=%d",carp);
      printf("girilen ikii say�n�n b�l�m�=%d",bol);
      printf("%f+%f=%f\n",sayi1,sayi2,topla);
      printf("%f+%f=%f\n",sayi1,sayi2,cikar);
      printf("%f+%f=%f\n",sayi1,sayi2,carp);
      printf("%f+%f=%f\n",sayi1,sayi2,bol);
}

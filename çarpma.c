#include<stdio.h>
int carpma(int sayi1,int sayi2)
{
      return(sayi1*sayi2);
}
int main()
{
      int sayi1;
      int sayi2;
      int sonuc;
      printf("1. sayýyý giriniz=");
      scanf("%d",&sayi1);
      printf("2. sayýyý giriniz=");
      scanf("%d",&sayi2);
      sonuc=carpma(sayi1,sayi2);
      printf("çarpma sonucu=%d",sonuc);
}

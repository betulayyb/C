#include<stdio.h>
int cikarma(int sayi1,int sayi2)
{
      return(sayi1-sayi2);

}
int main()
{
      int sayi1;
      int sayi2;
      int Hesapla;
      printf("1. sayıyı giriniz=");
      scanf("%d",&sayi1);
      printf("2. sayıyı giriniz=");
      scanf("%d",&sayi2);
      Hesapla=cikarma(sayi1,sayi2);
      printf("sayi1-sayi2=%d",Hesapla);
}

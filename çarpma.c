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
      printf("1. say�y� giriniz=");
      scanf("%d",&sayi1);
      printf("2. say�y� giriniz=");
      scanf("%d",&sayi2);
      sonuc=carpma(sayi1,sayi2);
      printf("�arpma sonucu=%d",sonuc);
}

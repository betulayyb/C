#include<stdio.h>
int topla(int a,int b)
{
  return(a+b);

}
int main()
{
int a,b,toplam;
  printf("A say�s�n� giriniz=");
  scanf("%d",&a);
  printf("B say�s�n� giriniz=");
  scanf("%d",&b);
  toplam=topla(a,b);
  printf("A+B=%d",toplam);
}

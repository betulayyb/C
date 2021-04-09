#include<stdio.h>
int topla(int a,int b)
{
  return(a+b);

}
int main()
{
int a,b,toplam;
  printf("A sayýsýný giriniz=");
  scanf("%d",&a);
  printf("B sayýsýný giriniz=");
  scanf("%d",&b);
  toplam=topla(a,b);
  printf("A+B=%d",toplam);
}

#include<stdio.h>
int faktoriyel(int sayi)
{
      int fact=1;
      for (;sayi>0;sayi--)
      {
            fact*=sayi;
      }
      return fact;
}
int main()
{
      int n;
      printf("faktoriyelini hesaplayacığınız sayıyı hesaplayınız=");
      scanf("%d",&n);
      printf("fact sonuc=%d",faktoriyel(n));
}

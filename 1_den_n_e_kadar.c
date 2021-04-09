#include <stdio.h>
int birden_n_toplam(int n)
{
      int i;
      int s;
      s=0;
      for (i=1;i<=n;i++)
      s+=i;
      return s;
}
main()
{
      int ust_limit;
      printf("\n üst deðeri giriniz=");
      scanf("%d",&ust_limit);
      printf("\n 1+2+3+..+%d=%d\n\n",ust_limit,birden_n_toplam(ust_limit));
}

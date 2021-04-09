#include <stdio.h>
main ()
{
int i, n, sayac = 0;
printf ("asal mi degil mi oðrenmek istediginiz sayiyi yaziniz =");
scanf ( "% d", &n);
for (i = 2; i <n; i ++) {
if (n% i == 0){
sayac==1;
}
}
if (sayac=0)
printf ("asal sayi\n");
else
printf ("asal degil\n");
}

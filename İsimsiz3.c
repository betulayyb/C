#include<stdio.h>
main()
{
int dizi[10]={-119,121,-54,18,-5,-8,52,2,14,10};
int pozitif_dizi[10];
int i=0;
printf("\n\n---  DIZI--- \n");
for ( i=0;i<10;i++)
{
	printf("%3d",dizi[i]);
}
printf("\n\n-- POZÝTÝF DIZI---\n");
{

for ( i=0;i<10;i++)
   {
   if(dizi[i]>0)       
          pozitif_dizi[i]=dizi[i];            
       
       else
          pozitif_dizi[i]=0;  }
   }
}


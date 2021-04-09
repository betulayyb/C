#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() 
{ 
int sayi[10]; 
int i,j,l=0; 
	for (i=1;i<11;i++)
	{
		printf("%d.sayi=",i);
		scanf("%d",&sayi[i]);
	}

   {
   for(i = 0; i < 10; i++) 
    {
    	if (sayi[i]>l)
    	l=sayi[i];	
	}
	printf("en buyuk sayi = %d\n",sayi[i]);
    }
{
		for (j=0;j<10;i++)
	{
		if (sayi[j]<l)
		l=sayi[j];
	}
	printf("en kucuk sayi = %d\n",sayi[j]);
	
}
}

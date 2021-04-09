#include <stdio.h> 

int main() 
{ 
int sayi[10]; 
int i,j,max=0,min=999999; 
	for (i=1;i<11;i++)
	{
		printf("%d.sayi=",i);
		scanf("%d",&sayi[i]);
	}

   {
   for(i = 0; i < 10; i++) 
    {
    	if (sayi[i]>max)
    	max=sayi[i];	
    	if (sayi[i]<=min)
    	min=sayi[i];
	}
	printf("en buyuk sayi = %d\n",max);
		printf("en buyuk sayi = %d\n",min);
}
}

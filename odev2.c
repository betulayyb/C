#include<stdio.h>
int main()
{
	float normalizasyon_dizisi[10], giris_dizisi[10], sirali_dizi[10], gecici;
	int i, j, min, max; 
	printf("Dizi Giriniz:\n");
	for(i=0 ; i<10 ;i++)
	{
		printf("sayi=");
		scanf("%f",&giris_dizisi[i]);
	}
	printf("giris dizisi:\n");
	for(i=0 ; i<10 ; i++)
	{
		printf("%f\t", giris_dizisi[i]);
	}
	max=min=giris_dizisi[0];
	for (i=0 ; i<10 ; i++)
	{
		if (giris_dizisi[i] < min)
	    {
			min=giris_dizisi[i];
		}
		if (giris_dizisi[i] > max)
		{
			max=giris_dizisi[i];
		}
	}
	printf("\n normalizasyon dizisi:\n");
	for(i=0 ; i<10 ; i++) 
	{ 
		normalizasyon_dizisi[i]=(giris_dizisi[i] - min) / (max - min);
		printf("%f\t",normalizasyon_dizisi[i]);
	}
	for(i=0; i=10 ;i++)
	{
		for (j=0;j<10 ; j++)
		{
			if(normalizasyon_dizisi[i] > normalizasyon_dizisi[j])
			{
				
				gecici = normalizasyon_dizisi[i];
				normalizasyon_dizisi[i] = normalizasyon_dizisi[j];
				normalizasyon_dizisi[j] = gecici;
	        }
	    }
	}
	printf("\nsirali dizisi:\n");
	for (i=0; i<10 ; i++)
	{
	printf("%f\t",normalizasyon_dizisi[i]);
	}
}

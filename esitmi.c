int a[5]={1,3,4,5,9};
int b=1,i;
void main()
{
	for (i=0;i<5;i++)
	{
		b++;
		if(b!=a[i])
		printf("a[%d]=%d\n",i,a[i]);
	}
}

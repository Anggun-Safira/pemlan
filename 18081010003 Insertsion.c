#include <stdio.h>
#include <stdlib.h>
//inter

int main()
{
	int data[5]={2,6,3,1,4};
	int m,n;
	printf("Data: \n");
	for(m=0;m<5;m++)
	{
		printf("%i\t", data[m]);
	}
	
	for(m=1;m<6;m++)
	{
		for (n=m;n>0 && data[n]<data[n-1]; n--)
		{
			int swap=data[n-1];
			data[n-1]=data[n];
			data[n]=swap;
		}
	}
	
	printf("\nData setelah diurutkan :\n");
	for(m=0;m<5;m++)
	{
		printf("%d\t", data[m]);
	}
 return 0;
}

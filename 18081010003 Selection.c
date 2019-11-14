#include <stdio.h>
#include <stdlib.h>
//inter

int main()
{
	int data[5]={3,2,4,1,5};
	int m,n, iMin;
	printf("Data: \n");
	for(m=0;m<5;m++)
	{
		int iMin=m;
		printf("%d\t", data[m]);
	
	for(n=m;n<5;n++)
	{
		if (data[n]<data[iMin])
		{
			iMin=n;
		}
	}
			int swap=data[m];
			data[m]=data[iMin];
			data[iMin]=swap;
	}
	printf("\nData setelah diurutkan :\n");
	for(m=0;m<5;m++)
	{
		printf("%d\t", data[m]);
	}
 return 0;
}

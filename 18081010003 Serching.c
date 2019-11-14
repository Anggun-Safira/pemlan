#include <stdio.h>
#include <stdlib.h>

int main()
{
	int data[8] = {8,10,6,-2,11,7,1,100};
	int i, cari, flag=0;
	printf("Masukkan angka yang dicari :");
	scanf("%i", &cari);
	
	for (i=0;i<=8;i++)
	{
		if(data[i]==cari)
		{
			flag=1;
			break;
		}
	}
	if (flag==1)
	printf("Data di indeks ke-%i", i);
	else printf("data tidak ada");
	return 0;
}

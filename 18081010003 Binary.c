#include <stdio.h> 
int main()
{
	int data[6]={1,2,3,7,23,30,99};
	int cari, flag=0, awal, tengah, akhir;
	awal=0;
	akhir=6;
	printf("Angka yang dicari :");
	scanf("%d", &cari);
	while (awal<=akhir && flag ==0)
	{
		tengah=(awal+akhir)/2;
		if
		(data[tengah]==cari)
		{
			flag=1;
			break;
		}
		else if
		(data[tengah]<cari)
		{
			awal=tengah+1;
			printf("Kanan\n");
		}
		else
		{
			akhir=tengah-1;
			printf("Kiri\n");
		}
	}
	if(flag=1)
	printf("Data ada");
	else
	printf("Data tidak ada");
}

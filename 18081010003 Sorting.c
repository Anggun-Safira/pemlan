#include <stdio.h>
#include <stdlib.h>

void Sorting (int [], int);
int main() 
{

	int data[20], pindah, x, i;
	int input[10];
	
	printf("Masukkan angka : ");
	scanf("%d", &x);
	
	printf("Inputan :\n");
	for (i=0;i<x;i++)
	{
		scanf("%d", &input[i]);
	}
	
	printf("Urutan :\n");
	for (i=0;i<x;i++)
	{
		printf("%d\n", &input[i]);
	}
	
	void Sorting(int x, int input[])
	{
		int m,n, pindah;
		for(m=0;m<x;m++)
		{
			for(n=m;n<x;n++)
			{
				if(input[m]>input[n])
				{
					int pindah = input[m];
					input[m]=input[n];
					input[n] = pindah;
					getch();
					system("cls");
				}
			}
		}
	}
	void cari()
	{	
	}
}

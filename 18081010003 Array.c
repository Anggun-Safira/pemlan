#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int i, search;
	int npm[3] = {1234,5678,9123};
	float ipk[3] = {3.43, 3.94, 3.55};
	
	printf("Data Mahasiswa \n\n");
	for(i = 0; i<3; i++)
	{
		printf("NPM : %d\n", npm[i]);
		printf("IPK : %f\n\n", ipk[i]);
	}
	
	printf("Reverse Data Mahasiswa \n\n");
	for(i = 2 ; i>=0; i--)
	{
		printf("NPM : %d\n", npm[i]);
		printf("IPK : %f\n\n", ipk[i]);	
	}
	
	printf("Masukkan NPM yang dicari : \n");
	scanf("%d", &search);
	for(i = 0; i<3; i++)
	{
		if (npm[i] == search)
		{
			printf("NPM : %d\n", npm[i]);
			printf("IPK : %f\n\n", ipk[i]);
			
			break;
		}

	}
	
	return 0;
}

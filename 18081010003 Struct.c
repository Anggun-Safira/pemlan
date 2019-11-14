#include <stdio.h>
#include <stdlib.h>

struct data
{
	int npm;
	float ipk;
};

typedef struct data dat;

int main()
{
	printf("Data Mahasiswa\n\n");
	int i, search;
	dat mhs [3];
	mhs[0].npm= 1234;
	mhs[0].ipk= 3.43;
	
	mhs[1].npm= 5678;
	mhs[1].ipk= 3.94;
	
	mhs[2].npm= 9123;
	mhs[2].ipk= 3.55;
	
	for(i= 0 ; i<3 ; i++)
	{
		printf("%d = %f \n\n", mhs[i].npm, mhs[i].ipk);	
	}
	
	printf("Reverse Data Mahasiswa \n\n");
	for(i = 2 ; i>=0; i--)
	{
		printf("%d = %f \n\n", mhs[i].npm, mhs[i].ipk);	
	}
	
	printf("Masukkan NPM yang dicari : \n");
	scanf("%d", &search);
	for(i = 0; i<3; i++)
	{
		if (mhs[i].npm == search)
		{
			printf("%d = %f \n\n", mhs[i].npm, mhs[i].ipk);	
			break;
		}
	}
	return 0;
}

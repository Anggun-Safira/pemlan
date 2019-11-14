#include <stdio.h>
#include <stdlib.h>

struct data_mahasiswa
{
	char nama [30], tempat_lahir[50], jurusan[50];
	int npm, tanggal, bulan, tahun, semester;
	
};
typedef struct data_mahasiswa mhs;

int main() 
{
	struct data_mahasiswa mhs;
	strcpy(mhs.nama,"Anggun Safira Kusmindasari");
	mhs.npm = 18081010003;
	
	
	printf("Nama : %s\n", mhs.nama);
	
	return 0;
}

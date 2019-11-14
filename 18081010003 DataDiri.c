#include <stdio.h>
#include <string.h>

int main() 
{
	char nama [50], alamat[100], tempat_lahir [30], jurusan [200], npm [20], nomor_hp [20];
	int  tanggal, bulan, tahun;
	
	printf ("=== INPUT DATA DIRI === \n\n");
	
	printf("Masukkan nama: ");
	scanf("%[^\n]s", &nama);
	
	printf("Masukkan NPM: ");
	scanf("%s", &npm);
	
	printf("Masukkan Tempat Lahir: ");
	scanf("%s", &tempat_lahir);
	
	printf("Masukkan Tanggal Lahir:");
	scanf("%d", &tanggal);
	
	printf("Masukkan Bulan Lahir: ");
	scanf("%d", &bulan);
	
	printf("Masukkan Tahun Lahir: ");
	scanf("%d", &tahun);
	
	printf("Masukkan Nomor HP: ");
	scanf("%s", &nomor_hp);
	
	fflush(stdin);
	printf("Masukkan Alamat: ");
	scanf("%[^\n]s", &alamat);
	
	fflush(stdin);
	printf("Masukkan Jurusan: ");
	scanf("%[^\n]s", &jurusan);
	
	
	printf ("\n\n=== TAMPILKAN DATA DIRI === \n\n");
	
	printf("Nama: %s\n",nama);
	printf("NPM: %s\n",npm);
	printf("Tempat Lahir: %s\n",tempat_lahir);
	printf("Tanggal Lahir: %d-%d-%d\n",tanggal, bulan, tahun);
	printf("Nomor HP: %s\n",nomor_hp);
	printf("Alamat: %s\n",alamat);
	printf("Jurusan: %s\n",jurusan);

	return 0;
}

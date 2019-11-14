#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <string.h>

struct alamat
{
	char jalan[30];
	char kota[20];
	char provinsi[20];
};

struct lahir
{
	int tanggal, bulan, tahun;
};

struct nasabah
{
	char nama[30];
	long nomer_rekening;
	char bank [10];
	long saldo;
	struct alamat dataAlamat;
	struct lahir dataLahir;
	
};

typedef struct nasabah data;

int main()
{
	data nsbh[5];
	
	strcpy(nsbh[0].nama, "Septian Aidan Nugroho");
	nsbh[0].nomer_rekening = 1111;
	strcpy(nsbh[0].bank, "Mandiri");
	nsbh[0].saldo = 10000000;
	strcpy(nsbh[0].dataAlamat.jalan, "Jalan Semampir");
	strcpy(nsbh[0].dataAlamat.kota, "Malang");
	strcpy(nsbh[0].dataAlamat.provinsi, "Jawa Timur");
	nsbh[0].dataLahir.tanggal = 15;
	nsbh[0].dataLahir.bulan = 7;
	nsbh[0].dataLahir.tahun = 1998;

	strcpy(nsbh[1].nama, "Jihan Halana");
	nsbh[1].nomer_rekening = 2222;
	strcpy(nsbh[1].bank, "BRI");
	nsbh[1].saldo = 5000000;
	strcpy(nsbh[1].dataAlamat.jalan, "Jalan Saturnus");
	strcpy(nsbh[1].dataAlamat.kota, "Bandung");
	strcpy(nsbh[1].dataAlamat.provinsi, "Jawa Barat");
	nsbh[1].dataLahir.tanggal = 1;
	nsbh[1].dataLahir.bulan = 9;
	nsbh[1].dataLahir.tahun = 1999;
	
	strcpy(nsbh[2].nama, "Genta Denalfian");
	nsbh[2].nomer_rekening = 3333;
	strcpy(nsbh[2].bank, "BNI");
	nsbh[2].saldo = 7000000;
	strcpy(nsbh[2].dataAlamat.jalan, "Jalan Himalaya");
	strcpy(nsbh[2].dataAlamat.kota, "Bogor");
	strcpy(nsbh[2].dataAlamat.provinsi, "Jawa Barat");
	nsbh[2].dataLahir.tanggal = 10;
	nsbh[2].dataLahir.bulan = 5;
	nsbh[2].dataLahir.tahun = 1990;
	
	strcpy(nsbh[3].nama, "Samudra Pradirga Wijaya");
	nsbh[3].nomer_rekening = 4444;
	strcpy(nsbh[3].bank, "Mandiri");
	nsbh[3].saldo = 1000000;
	strcpy(nsbh[3].dataAlamat.jalan, "Jalan Damar");
	strcpy(nsbh[3].dataAlamat.kota, "Yogyakarta");
	strcpy(nsbh[3].dataAlamat.provinsi, "Jawa Tengah");
	nsbh[3].dataLahir.tanggal = 3;
	nsbh[3].dataLahir.bulan = 9;
	nsbh[3].dataLahir.tahun = 1987;
	
	strcpy(nsbh[4].nama, "Melodi Aswari");
	nsbh[4].nomer_rekening = 5555;
	strcpy(nsbh[4].bank, "BNI");
	nsbh[4].saldo = 350000;
	strcpy(nsbh[4].dataAlamat.jalan, "Jalan Atlantis");
	strcpy(nsbh[4].dataAlamat.kota, "Jambi");
	strcpy(nsbh[4].dataAlamat.provinsi, "Riau");
	nsbh[4].dataLahir.tanggal = 9;
	nsbh[4].dataLahir.bulan = 5;
	nsbh[4].dataLahir.tahun = 1988;
	
	
	int search, i, pilih, saldo;
	while (pilih != 1 || pilih != 2 || pilih != 3 || pilih != 4 || pilih !=5)
	{
		printf("PILIHAN MENU : \n\n");
		printf("1. Tampilkan data nasabah  \n2. Cari nasabah dengan No Rekening \n3. Akumulasi saldo nasabah \n4. Cari nasabah dengan kota \n5.Tampilkan nasabah dengan umur tertentu \n\n");
		printf("Masukkan Pilihan : \n");
		scanf("%d", &pilih);
		if(pilih == 1)
		{
			printf("DATA NASABAH : \n\n");
			for(i = 0; i<5; i++)
			{
				printf("Nama : %s\n",nsbh[i].nama);
				printf("No Rekening : %ld\n", nsbh[i].nomer_rekening);
				printf("Bank : %s\n", nsbh[i].bank);
				printf("Saldo : %ld\n", nsbh[i].saldo);
				printf("Alamat : %s, %s, %s\n", nsbh[i].dataAlamat.jalan, nsbh[i].dataAlamat.kota, nsbh[i].dataAlamat.provinsi);
				printf("Tanggal lahir : %d-%d-%d\n\n", nsbh[i].dataLahir.tanggal, nsbh[i].dataLahir.bulan, nsbh[i].dataLahir.tahun);
			}
		}
	
		else if (pilih == 2)
		{
			bool flag = false;
			printf("Masukkan No Rekening :\n");
			scanf("%d", &search);
			for(i = 0 ; i<5; i++)
			{
				
				if (nsbh[i].nomer_rekening == search)
				{
					printf("Nama : %s\n",nsbh[i].nama);
					printf("No Rekening : %ld\n", nsbh[i].nomer_rekening);
					printf("Bank : %s\n", nsbh[i].bank);
					printf("Saldo : %ld\n", nsbh[i].saldo);
					printf("Alamat : %s, %s, %s\n", nsbh[i].dataAlamat.jalan, nsbh[i].dataAlamat.kota, nsbh[i].dataAlamat.provinsi);
					getchar();
					printf("Tanggal lahir : %d-%d-%d\n\n\n", nsbh[i].dataLahir.tanggal, nsbh[i].dataLahir.bulan, nsbh[i].dataLahir.tahun);
					
					flag = true;
					break;
				}
				
				if (flag = false);
				{
					printf("No Rekening salah\n\n");
					break;
				}
			}
		} 
		
		else if (pilih == 3)
		{
			
			long saldo = 0;
			for(i = 0; i<5 ; i++)
			{
				saldo+=nsbh[i].saldo;
				printf("%2.ld\n", nsbh[i].saldo);
			}
			printf("Akumulasi saldo : %2.ld\n\n", saldo);
		}
		
		else if (pilih == 4)
		{
			char kota[20];
			printf("Masukkan kota :\n", i);
			scanf("%s", &kota);
			for(i = 0 ; i<5; i++)
			{
					
				if (strcmp(nsbh[i].dataAlamat.kota,kota)==0)
				{
					printf("Nama : %s\n",nsbh[i].nama);
					printf("No Rekening : %ld\n", nsbh[i].nomer_rekening);
					printf("Bank : %s\n", nsbh[i].bank);
					printf("Saldo : %ld\n", nsbh[i].saldo);
					printf("Alamat : %s, %s, %s\n", nsbh[i].dataAlamat.jalan, nsbh[i].dataAlamat.kota, nsbh[i].dataAlamat.provinsi);
					printf("Tanggal lahir : %d-%d-%d\n\n\n", nsbh[i].dataLahir.tanggal, nsbh[i].dataLahir.bulan, nsbh[i].dataLahir.tahun);
					break;
				}
				
			}
			
		}
		
		else if (pilih == 5)
		{
			bool flag = false;
			int umur,tahun;
			printf("Masukkan umur :");
			scanf("%d", &umur);
			for(i = 0 ; i<5 ; i++)
			{
				tahun = 2019 - umur;
				if (tahun == nsbh[i].dataLahir.tahun)
				{
					printf("Nama : %s\n",nsbh[i].nama);
					printf("No Rekening : %ld\n", nsbh[i].nomer_rekening);
					printf("Bank : %s\n", nsbh[i].bank);
					printf("Saldo : %ld\n", nsbh[i].saldo);
					printf("Alamat : %s, %s, %s\n", nsbh[i].dataAlamat.jalan, nsbh[i].dataAlamat.kota, nsbh[i].dataAlamat.provinsi);
					printf("Tanggal lahir : %d-%d-%d\n\n\n", nsbh[i].dataLahir.tanggal, nsbh[i].dataLahir.bulan, nsbh[i].dataLahir.tahun);
					
					flag = true;
					break;
				}	
			}
			
			if (flag = false);
			{
				printf("Umur tidak ditemukan\n\n");
			}

		}
	}
	return 0;
}

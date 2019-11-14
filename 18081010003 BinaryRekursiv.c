#include <stdio.h> 

int biner(int data[], int l, int r, int x) 
{ 
	if (r >= l) 
	{ 
		int tengah = l + (r - l) / 2; 


		if (data[tengah] == x) 
			return tengah; 


		if (data[tengah] > x) 
			return biner(data, l, tengah - 1, x); 


		return biner(data, tengah + 1, r, x); 
	} 


	return -1; 
} 

int main(void) 
{ 
	int data[] = {2, 5, 50, 90, 100}; 
	int x;
	int n = sizeof(data) / sizeof(data[0]);
	printf("Masukkan angka (x) : ");
	scanf("%d", &x); 
	int result = biner(data, 0, n - 1, x); 
	(result == -1) ? printf("Tidak ditemukan") 
			       : printf("Terletak pada indeks %d",result); 
	return 0; 
} 


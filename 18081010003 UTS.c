#include <stdio.h>
#include <stdlib.h>
struct kontainer
{
	int ukuran, berat;
	char vendor, jenis_muatan;
};

struct blok
{
	int i;
	int menu;
	char a,b,c;
	char blok;
	struct kontainer ner;
};
 typedef struct blok bk;
 
 void cetak()
 {
	static char j;
	printf("Blok : %d, %d, %s, %s ",j++);
}

int main()
{
	int a1,b1,c1;
	bk bk;
	while (bk.i)
	{
		printf("1. Input isi\n");
		printf("2. Tampilkan blok\n");
		printf("Pilih menu : \n");
		scanf("%d", &bk.menu);
		switch(bk.menu)
		{
			case 1:
				printf("Pilih blok :\n");
				printf("A. Blok A\n");
				printf("B. Blok B\n");
				printf("C. Blok C\n");
				printf("Pilih blok : \n");
				scanf("%s", &bk.blok);
				switch(bk.blok)
				{
					case 'A' : case 'a' :
						printf("Input ukuran :\n");
						scanf("%d", &bk.ner.ukuran, &bk.a);
						printf("Input berat : \n");
						scanf("%d", &bk.ner.berat, &bk.a);
						printf("Input vendor :\n");
						scanf("%s", &bk.ner.vendor, &bk.a);
						printf("Input jenis mautan :\n");
						scanf("%s", &bk.ner.jenis_muatan, &bk.a);
						system("cls");
						break;
					case 'B' : case 'b' :
						printf("Input ukuran :\n");
						scanf("%d", &bk.ner.ukuran, &bk.b);
						printf("Input berat : \n");
						scanf("%d", &bk.ner.berat, &bk.b);
						printf("Input vendor :\n");
						scanf("%s", &bk.ner.vendor, &bk.b);
						printf("Input jenis mautan :\n");
						scanf("%s", &bk.ner.jenis_muatan, &bk.b);
						system("cls");
						break;
					case 'C' : case 'c' :
						printf("Input ukuran :\n");
						scanf("%d", &bk.ner.ukuran, &bk.c);
						printf("Input berat : \n");
						scanf("%d", &bk.ner.berat, &bk.c);
						printf("Input vendor :\n");
						scanf("%s", &bk.ner.vendor, &bk.c);
						printf("Input jenis mautan :\n");
						scanf("%s", &bk.ner.jenis_muatan, &bk.c);
						system("cls");
						break;	
				}
				break;
				
				case 2 :
					{
						int array [3][3][3]=
						{
							{{bk.ner.ukuran, bk.ner.berat, bk.ner.vendor, bk.ner.jenis_muatan, bk.a}},
							{{bk.ner.ukuran, bk.ner.berat, bk.ner.vendor, bk.ner.jenis_muatan, bk.b}},
							{{bk.ner.ukuran, bk.ner.berat, bk.ner.vendor, bk.ner.jenis_muatan, bk.c}}
						};
						
						printf ("A\n");
						a1= bk.ner.ukuran, bk.ner.berat, bk.ner.vendor, bk.ner.jenis_muatan, bk.a;
						cetak();
						printf("%d, %d, %s, %s", &bk.a);
						
						printf ("B\n");
						b1= bk.ner.ukuran, bk.ner.berat, bk.ner.vendor, bk.ner.jenis_muatan, bk.b;
						cetak();
						printf("%d, %d, %s, %s", &bk.b);
							
						printf ("C\n");
						c1= bk.ner.ukuran, bk.ner.berat, bk.ner.vendor, bk.ner.jenis_muatan, bk.c;
						cetak();
						printf("%d, %d, %s, %s", &bk.c);
						getch();
						system("cls");
						break;
					}
		}
	}
	
	return 0;
}

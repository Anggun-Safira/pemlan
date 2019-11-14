#include <stdio.h>
#include <conio.h>

main()
{
	
 char npm[5][10];
 float n1, n2, n3, n4, n5, ipk, nilai;
 char  mn1, mn2, mn3, mn4, mn5, nama;
 int   sks1, sks2, sks3, sks4, sks5, total_sks;

 printf("Data Mahasiswa Semester 3\n\n"); 
 
 printf("Nama Mahasiswa = ");
 scanf("%s", &nama);
 fflush(stdin);
 printf("NPM = ");
 scanf("%ld[\n]", &npm);

 printf("Mata Kuliah    : Pancasila\n");
 printf("Masukkan Nilai = ");
 scanf ("%s", &mn1);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks1);
 
 printf("Mata Kuliah    : Bela Negara\n");
 printf("Masukkan Nilai = ");
 scanf ("%s", &mn2);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks2);
 
 printf("Mata Kuliah    : Pemrograman Dasar \n");
 printf("Masukkan Nilai = ");
 scanf ("%s", &mn3);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks3);

 printf("Mata Kuliah    : Algoritma Dasar \n");
 printf("Masukkan Nilai = ");
 scanf ("%s", &mn4);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks4);
 
 printf("Mata Kuliah    : Sistem Operasi \n");
 printf("Masukkan Nilai = ");
 scanf ("%s", &mn5);
 printf("Masukkan SKS   = ");
 scanf ("%d", &sks5);

  if(mn1=='A')
  {
   	n1 = 4;
  } 
  else if (mn1=='B') 
  {
  	n1 = 3;
  } 
  else if (mn1=='C') 
  {
   	n1 = 2;
  } 
  else if (mn1=='D') 
  {
   	n1 = 1;
  } 
  else 
  {
  	n1 = 0;
  }
  
  
  if(mn2=='A')
  {
   	n2 = 4;
  } 
  else if (mn2=='B') 
  {
   	n2 = 3;
  } 
  else if (mn2=='C') 
  {
   	n2 = 2;
  } 
  else if (mn2=='D') 
  {
   	n2 = 1;
  } 
  else 
  {
   	n2 = 0;
  }


  if(mn3=='A')
  {
   	n3 = 4;
  } 
  else if (mn3=='B')
  {
   	n3 = 3;
  } 
  else if (mn3=='C')
  {
  	n3 = 2;
  } 
  else if (mn3=='D') 
  {
   	n3 = 1;
  } 
  else 
  {
   	n3 = 0;
  }


  if(mn4=='A')
  {
   	n4 = 4;
  } 
  else if (mn4=='B') 
  {
   	n4 = 3;
  } 
  else if (mn4=='C') 
  {
   	n4 = 2;
  } 
  else if (mn4=='D') 
  {
   	n4 = 1;
  } 
  else 
  {
   	n4 = 0;
  }
  

  if(mn5=='A')
  {
   	n5 = 4;
  } 
  else if (mn5=='B') 
  {
  	n5 = 3;
  } 
  else if (mn5=='C') 
  {
   	n5 = 2;
  } 
  else if (mn5=='D') 
  {
   	n5 = 1;
  } 
  else 
  {
   	n5 = 0;
  }
   
 total_sks    = sks1 + sks2 + sks3 + sks4 + sks5;
 nilai  = (n1*sks1) + (n2*sks2) + (n3*sks3) + (n4*sks4) + (n5*sks5);
 ipk = nilai/total_sks;

 printf("| No.        Mata Kuliah             SKS         Nilai     |\n");

 printf("| 1.  Pancasila                       %d            %.0f       |\n", sks1, n1);
 printf("| 2.  Bela Negara                     %d            %.0f       |\n", sks2, n2);
 printf("| 3.  Pemrograman Dasar               %d            %.0f       |\n", sks3, n3);
 printf("| 4.  Algoritma Dasar                 %d            %.0f       |\n", sks4, n4);
 printf("| 5.  Sistem Operasi                  %d            %.0f       |\n", sks5, n5);

 printf("|                          Total SKS = %d SKS  IP = %.2f    |\n", total_sks, ipk);

 
 getch();
}

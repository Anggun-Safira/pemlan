#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a,b,c,g,h,i;
	float rumus1,rumus2,rumus3,rumus4,rumus5,rumus6,rumus7,rumus8;
	int data [2][3][3] =
	{{{6,7,8},{5,1,5},{1,2,1}},{{-3,2,5},{-4,3,4},{-5,7,8}}};
	int data2 [2][3][3] =
	{{{2,3,4},{7,4,3},{1,2,3}},{{6,7,8},{5,1,5},{1,2,1}}};
	
	printf("Array 3 Dimensi\n");
	for (a=0;a<2;a++)
	{
	for (b=0;b<3;b++)
	{
	for (c=0;c<3;c++)	
	{
		printf("%d ", data[a][b][c]);
	}
	printf("\n");
	}
	printf("\n");
	}
	
	printf("Array tambahan\n");
	for (g=0;g<2;g++)
	{
	for (h=0;h<3;h++)
	{
	for (i=0;i<3;i++)
	{
		printf("%d ", data2[g][h][i]);
	}
	printf("\n");
	}
	printf("\n");
	}
	
	
	printf("Panjang Lintasan\n\n");
	rumus1= sqrt(pow(6-5,2)+pow(7-1,2)+pow(8-5,2));
	printf("Da-b : %f\n", rumus1);
	
	rumus2= sqrt(pow(5-1,2)+pow(1-2,2)+pow(5-1,2));
	printf("Db-c : %f\n", rumus2);
	
	rumus3= sqrt (pow(-3+4,2)+pow(2-3,2)+pow(5-4,2));
	printf("Dd-e : %f\n", rumus3);
	
	rumus4= sqrt (pow(-4+5,2)+pow(3-7,2)+pow(4-8,2));
	printf("De-f : %f\n", rumus4);
	
	rumus5= sqrt (pow(2-7,2)+pow(3-4,2)+pow(4-3,2));
	printf("Dg-h : %f\n", rumus5);
	
	rumus6= sqrt (pow(7-1,2)+pow(4-2,2)+pow(3-3,2));
	printf("Dh-i : %f\n", rumus6);
	
	rumus7= sqrt (pow(6-5,2)+pow(7-1,2)+pow(8-5,2));
	printf("Dj-k : %f\n", rumus7);
	
	rumus8= sqrt (pow(5-1,2)+pow(1-2,2)+pow(5-1,2));
	printf("Dk-l : %f\n", rumus8);
	
	printf("Total D = %f", rumus1+rumus2+rumus3+rumus4+rumus5+rumus6+rumus7+rumus8);
	return 0;
}

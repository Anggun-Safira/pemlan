#include <stdio.h>
#include <stdlib.h>

//rekursif

int pangkat (int t, int v)
{
	if(v==0)
	{
		return 1;
	}
	else 
	{
		return t*pangkat(t,v-1);
	}
}

int main() 
{
	int t,v;
	printf("Input bilangan :");
	scanf("%d",&t);
	printf("Pangkat :");
	scanf("%d", &v);
	printf("Hasil %d ^ %d : %d\n",t,v,pangkat(t,v));
	return 0;
}

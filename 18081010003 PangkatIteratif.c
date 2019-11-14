#include <stdio.h>
#include <stdlib.h>


int main()
{
	int t,v,i,u;
	
	printf ("Input bilangan :");
	scanf("%d",&t);
	printf("Pangkat :");
	scanf("%d",&v);
	
	for (i=1; i<=v; i++)
	u=u*t;
	
	printf("Hasil %d ^ %d : %d\n",t,v,u);
	
	return 0;
}



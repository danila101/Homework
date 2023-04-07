#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int mas[100][100];
	
	int n,m;
	
	printf("vedite kolichestvo strok i stolbcov:\n");
	scanf("%i%i",&n,&m);
	printf("vedite chisla:\n");
	
	srand(time(NULL));
	
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			mas[j][i]=rand()%10+(-2);
		}
	}
	
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			printf("%7i",mas[j][i]);
		}
		printf("\n\n");
	}
}

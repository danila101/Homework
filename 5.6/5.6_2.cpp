#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int mas[100][100];
	
	int n,m;
	
	printf("vedite kolichestvo strok i stolbcov:\n");
	scanf("%i%i",&m,&n);
	
	srand(time(NULL));
	
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			mas[j][i]=rand()%100;
		}
	}
	
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			printf("%4i",mas[j][i]);
		}
		printf("\n\n");
	}
	
	for(int i=0;i<m;i++)
	{
		int a=mas[i][0];
		mas[i][0]=mas[i][n-1];
		mas[i][n-1]=a;
	}
	
	printf("\n\n\n\n");
	
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			printf("%4i",mas[j][i]);
		}
		printf("\n\n");
	}
}

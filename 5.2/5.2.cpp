#include <stdio.h>

main()
{
	int mas[100][100];
	
	int n,m;
	
	printf("vedite kolichestvo strok i stolbcov:\n");
	scanf("%i%i",&n,&m);
	printf("vedite chisla:\n");
	
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<m;i++)
		{
			scanf("%i",&mas[j][i]);
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
}

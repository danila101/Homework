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
	
	for(int j=0;j<n;j++)
	{
		for(int t=0;t<m;t++)
		{
			bool fl=true;
			while(fl)
			{
				fl=false;
				for(int i=0;i<m-1;i++)
				{
						if(mas[j][i]>mas[j][i+1])
						{
							int a=mas[j][i];
							mas[j][i]=mas[j][i+1];
							mas[j][i+1]=a;
							fl=true;
						}					
				}
			}
			
		}	
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

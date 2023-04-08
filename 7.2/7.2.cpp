#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void arr(int mas[],int a)
{
	srand(time(NULL));
	
	for(int j=0;j<a;j++)
	{
		mas[j]=rand()%100;
	}
	
	printf("\n\n\n\n");
	
	for(int j=0;j<a;j++)
	{
			printf("%4i",mas[j]);
	}
}

main()
{
	int a=10,b=15;
	int mas[a],mas1[b];
	
	printf("vedite razmer masiva 1:\n");
	scanf("%i",&a);
	printf("vedite razmer masiva 2:\n");
	scanf("%i",&b);
	
	
	arr(mas,a);
	Sleep(1000);
	arr(mas1,b);
	
	
}

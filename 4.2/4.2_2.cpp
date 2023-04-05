#include <stdio.h>

main()
{
	int n;
	int mas[100];
	
	printf("vedite kolichestvo elementov: \n");
	scanf("%i",&n);
	printf("vedite chisla:\n");
	
	for(int i=0;i<n;i++)
	{
		scanf("%i",&mas[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		printf("%2i",mas[i]);
	}
	
}

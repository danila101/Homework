#include <stdio.h>

main()
{
	int mas[100];
	int n;
	
	printf("vedite kolichestvo elementov:\n");
	scanf("%i",&n);
	printf("vedite chisla:\n");
	
	for(int i=0;i<n;i++)
	{
		scanf("%i",&mas[i]);
	}
	
	int min,max;
	min=max=mas[0];
	
	int sum=0;
	
	for (int i=0;i<n;i++)
	{
		if(mas[i]>max)
		{
			max=mas[i];
		}
		if(mas[i]<min)
		{
			min=mas[i];
		}
		
		sum+=mas[i];
	}
	
	float sr=(float)sum/(float)n;
	
	printf ("minimum: %i\nmaximum: %i\nsumma: %i\nsrednee: %f",min,max,sum,sr);
}

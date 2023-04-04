#include <stdio.h>

main()
{
	int a=0;
		while(a!=7)
		{
			scanf("%i",&a);
			if(a>7)
			{
				printf("bolshe\n");
			}
			else
			{
				if(a<7)
				{
					printf("menshe\n");
				}
				
			}
			
			if (a!=7)
			{
				if(a<10)
				{
					printf("menshe 10\n");
				}
				
				else
				{
					if (a!=10)
					{
						printf("bolshe 10\n");
					}
					
					
				}
				
				if (a%2==0)
				{
					printf("delitsa na 2\n");
				}
				else
				{
					printf("ne delitsa na 2\n");
				}
				
				if (a%3==0)
				{
					printf("delitsa na 3\n");
				}
				else
				{
					printf("ne delitsa na 3\n");
				}
			}
			
			
			
			
		}
}

#include <stdio.h>

main()
{
	long long int pin1,pin2;
	printf("pin1=");
	scanf("%i",&pin1);
	printf("pin2=");
	scanf("%i",&pin2);
	
	if((pin1==4538)&&(pin2==2569))
	{
		printf("user1");
	}
	else
	{
		if((pin1==4587)&&(pin2==6524))
		{
			printf("user2");
		}
		else
		{
			if((pin1==958712)&&(pin2==54))
			{
				printf("user3");
			}
			else
			{
				printf("Error");
			}
		}
	}
}

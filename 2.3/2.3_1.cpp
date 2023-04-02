#include <stdio.h>

main()
{
	int pin1,pin2;
	printf("pin1=");
	scanf("%i",&pin1);
	printf("pin2=");
	scanf("%i",&pin2);
	
	if(((pin1==4538)&&(pin2==2569)))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}
}

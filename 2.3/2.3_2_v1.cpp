#include <stdio.h>

main()
{
	long long int pin1,pin2;
	printf("pin1=");
	scanf("%i",&pin1);
	printf("pin2=");
	scanf("%i",&pin2);
	
	if(((pin1==4538)&&(pin2==2569))||((pin1==4587)&&(pin2==6524))||((pin1==958712)&&(pin2==54)))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}
}

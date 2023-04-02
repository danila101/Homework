#include <stdio.h>

main()
{
	int d,m,y;
	
	printf("enter date of birth \nday:");
	scanf("%i",&d);
	printf("month:");
	scanf("%i",&m);
	printf("year:");
	scanf("%i",&y);
	
	if((y%4)==0)
	{
		printf("1. Leap year\n");
	}
	else
	{
		printf("1. Non-leap year\n");
	}
	
	printf("2. Year according to the eastern calendar: ");
	switch(y%12)
	{
		case 1:
			{
				printf("Rooster");
			}
			break;
		case 2:
			{
				printf("Dog");
			}
			break;
		case 3:
			{
				printf("Pig");
			}
			break;
		case 4:
			{
				printf("Rat");
			}
			break;
		case 5:
			{
				printf("Ox");
		    }
			break;
		case 6:
			{
				printf("Tiger");
			}
			break;
		case 7:
			{
				printf("Rabbit");
			}
			break;
		case 8:
			{
				printf("Dragon");
			}
			break;
		case 9:
			{
				printf("Snake");
			}
			break;
		case 10:
			{
				printf("Horse");
			}
			break;
		case 11:
			{
				printf("Sheep");
			}
			break;
		case 0:
			{
				printf("Monkey");
			}
			break;
		default:
			{
				printf("Error");
			}
	}
	
	printf("\n3. Sign of the zodiac: ");
	
	if ((m==3&&d>20)||(m==4&&d<21))
	{
		printf("Aries");
	}
	else
	{
		if (((m==4&&d>20)||(m==5&&d<21))&&(d!=0&&d<31))
		{
			printf("Taurus");
		}
		else
		{
			if (((m==5&&d>20)||(m==6&&d<21))&&(d!=0&&d<32))
			{
				printf("Gemini");
			}
			else
			{
				if (((m==6&&d>20)||(m==7&&d<21))&&(d!=0&&d<31))
				{
					printf("Cancer");
				}
				else
				{
					if (((m==7&&d>20)||(m==8&&d<21))&&(d!=0&&d<32))
					{
						printf("Leo");
					}
					else
					{
						if (((m==8&&d>20)||(m==9&&d<21))&&(d!=0&&d<32))
						{
							printf("Virgo");
						}
						else
						{
							if (((m==9&&d>20)||(m==10&&d<21))&&(d!=0&&d<31))
							{
								printf("Libra");
							}
							else
							{
								if (((m==10&&d>20)||(m==11&&d<21))&&(d!=0&&d<32))
								{
									printf("Scorpio");
								}
								else
								{
									if (((m==11&&d>20)||(m==12&&d<21))&&(d!=0&&d<31))
									{
										printf("Sagittarius");
									}
									else
									{
										if (((m==12&&d>20)||(m==1&&d<21))&&(d!=0&&d<32))
										{
											printf("Capricorn");
										}
										else
										{
											if (((m==1&&d>20)||(m==2&&d<21))&&(d!=0&&d<32))
											{
												printf("Aquarius");
											}
											else
											{
												if (((m==2&&d>20)||(m==3&&d<21))&&(d!=0&&d<30)&&(((y%4)!=0^d==29)||(d<29)))
												{
													printf("Pisces");
												}
												else
												{
													printf("\r3. Invalid date entered");
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

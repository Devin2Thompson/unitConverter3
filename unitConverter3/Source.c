//Author: Devin Thompson
//Date: April 2, 2016
#include<stdio.h>
#include<math.h>
#include<string.h>

char unitType[4];
char siusUnit[2];
char originalUnit[2];
char newUnit[2];
double originalValue;

main()
{
	printf("This is a unit converter.\n It will convert SI and US units to other SI or US units.\n"); //Explains converter
	for (int i = 10; i>= 0; i--) // Loop to kick people off if they enter in something wrong too many times
	{
		printf("Please enter what type of measurement you would like to use?\n You can choose from four different measurements.\n These are Volume(vol), Area(area), Mass(mass), and Distance(dist)\n Please enter your choice as shown in the parenthesis.\n If you fail to do so, you will be asked to enter it in again.\n");
		scanf("%s", unitType);
		if (strcmp(unitType, "vol") == 0) //For units of volume
		{
			for (int j = 10; j >= 0; j--)
			{
				printf("Are you using SI or US units?(si, us)");
				scanf("%s", siusUnit);
				if (strcmp(siusUnit, "si") == 0)
				{
					for (int k = 10; k >= 0; k--)
					{
						printf("What unit are you converting from?\n"); //Ask what unit they are converting from
						scanf("%s", originalUnit);
						if()
					}
				}
				else if (strcmp(siusUnit, "us") == 0)
				{
					//Ask what unit they are converting from
				}
				else
				{
					printf("Sorry, your command was not recognized. Please try again.\n");
				}
			}
		}
		else if (strcmp(unitType, "area") == 0)
		{

		}
		else if (strcmp(unitType, "mass") == 0)
		{

		}
		else if (strcmp(unitType, "dist") == 0)
		{

		}
		else
		{
			printf("Sorry, the command was not recognized. Please enter a recognizable command.\n");
		}
	}
	
}
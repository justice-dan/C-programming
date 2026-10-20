/* Nsme:     Dan Omido
   Reg no.:  CT100/G/30709/26
*/

#include <stdio.h>

int main()
{
	int choice;

	//display menu
	printf("Option \t Bundle\tCost(Ksh.) \n");
	printf("1 \t 100MB \t 50 \n");
	printf("2 \t 500MB \t 200 \n");
	printf("3 \t 1GB \t 350 \n");
	printf("4 \t 2GB \t 600 \n");
	printf("\n\n=====================================\n");
	//get choice
	printf("Pick your option.:");
	scanf("%d", &choice);
	printf("=====================================\n");
	switch(choice)
	{
	case 1:
		printf("You picked option 1. Cost = Ksh.50 \n");
		break;
	case 2:
		printf("You picked option 2. Cost = Ksh.200 \n");
		break;
	case 3:
		printf("You picked option 3. Cost = Ksh.350 \n");
		break;
	case 4:
		printf("You picked option 4. Cost = Ksh.600 \n");
		break;
	default:
		printf("Invalid Option. \n");
		break;

	}

	return 0;
}

















/* Name:Dan Omido
   Reg no.: CT100/G/30709/26
*/

#include <stdio.h>

int main(){
	int attendance;
	int marks;
	
	//get student's attendance
	printf("Enter students's attendance percentage:");
	scanf("%d", &attendance);
	
	//get student's marks
	printf("Enter student,s avarage marks:");
	scanf("%d", &marks);
	
	//check exam qualification
	if(attendance >=75 && marks >=40){printf("Eligible. \n");}
		else
		{
			printf("Not Eligible");
		}
	
	return 0; //execution successfull
	
}
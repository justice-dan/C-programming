/* Name: Dan Omido
   Reg no.: CT100/G/30709/26
*/

#include <stdio.h>

float unitCharges(float units);

int main(){
	float units,bill,total_bill;
	
	printf("Enter units used: \t");
	scanf("%f",&units);
	
	//function calling
	bill=unitCharges(units);
	total_bill=bill * units;
	
	printf("CHARGES PROGRAM");
	printf(":::::::::::::::::::::::::::::::::::::: \n");
	printf("Units Used:%.2f units \n",units);
	printf("Bill:Ksh. %.2f \n",bill);
	printf("Total Bill:Ksh. %.2f \n",total_bill);
	printf("::::::::::::::::::::::::::::::::::::::");
	
	return 0; //execution successfull
	
}

//function difination
float unitCharges(float units){
float charges;

if(units<=30){charges=20;}
	
	else if(units>=31 && units<=60){charges=25;}
		
		else {charges=30;}
			
			return charges;
		
}






















/* Nsme:     Dan Omido
   Reg no.:  CT100/G/30709/26
*/

#include <stdio.h>

int main(){
	double balance,withdrawal;
	
	printf("Enter initial account balance:");
	scanf("%lf",&balance);
	
	while(balance >0){
		printf("Enter amount to withdraw:");
		scanf("%lf",&withdrawal);
		
		balance -=withdrawal;
		printf("Current balance: %.2f\n",balance);
		printf("==========================================\n");
	}
	printf("\n\n==========================================\n");
	printf("Account balance is 0 or negative.\n");
	printf("End of process\n");
	
	return 0;
}
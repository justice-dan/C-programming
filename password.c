/* Nsme:     Dan Omido
   Reg no.:  CT100/G/30709/26
*/

#include<stdio.h>

int main(){
	int password;
	
	do {
		printf("Enter password to log in: \n");
		scanf("%d", &password);
	} while (password != 1234);
	printf("Access Granted \n");
	
	return 0;
}
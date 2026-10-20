/* Name:    Dan Omido
   Reg no.: CT100/G/30709/26
*/

#include <stdio.h>
float calculateDiscount(float purchase_amount);

int main(){
	
	float amount,result,final_amount;
	printf("Enter the amount purchased: \t");
	scanf("%f", &amount);	
	//function calling
	result = calculateDiscount(amount);
	final_amount = amount - result;
	
	printf("DISCOUNT PROGRAM: \n");
	printf("|||||||||||||||||||||||||||||||||||| \n");
	printf("Initial amount: Ksh. %.2f \n",amount);
	printf("Discount offered: Ksh. %.2f \n",result);
	printf("Amount payable: Ksh. %.2f \n",final_amount);
	printf("|||||||||||||||||||||||||||||||||||| \n");

	return 0; //execution successful	
}

//function difination
float calculateDiscount(float purchase_amount){
float discount;

if(purchase_amount <5000){discount = 0.05 * purchase_amount;}
	
	else if(purchase_amount >=5000 && purchase_amount <=9999){discount = 0.1 * purchase_amount;}
		
		else if(purchase_amount >=10000){discount = 0.15 * purchase_amount;}
			
			return discount;
		
}

 
















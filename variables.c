//Name: Dan Justice Omido
//Reg No.: CT100/G/30709/26

//Variables and Data Types

#include <stdio.h>

int main()
{
    //declare and initialize variables
    int phone_number = 0701101011; //&d
    float height = 160; //%f
    double bank_balance = 50000; //%lf


    printf("Enter your phone_number \t");
    scanf("%d", &phone_number);

    printf("Enter your height(cm) \t");
    scanf("%f", &height);

    printf("Enter your bank balance(Ksh) \t");
    scanf("%lf", &bank_balance);
    printf("\n||||||||||||||||||||||||||||||||||||||||||||||| \n");

    printf("My phone number is %d \n ", phone_number);
    printf("My height is %.2f \n ", height);
    printf("My bank balance is Ksh %.2lf \n", bank_balance);

    return 0; //execution seccessfull
}









































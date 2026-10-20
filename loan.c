/* Name:     Dan Omido
   Reg No.:  CT100/G/30709/26
*/

#include <stdio.h>

int main()
{
    int age;
    float income;

    // Get customer's age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Get customer's annual income
    printf("Enter your annual income: Sh");
    scanf("%f", &income);
    printf("\n==================================================================\n");

    // Check loan qualification
    if (age >= 21 && income >= 21000)
    {
        printf("Congratulations you qualify for a loan.\n");
    }
    else
    {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}









































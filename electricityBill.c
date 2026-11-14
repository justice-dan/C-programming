/* Name:    Dan Omido
   Reg no.: CT100/G/30709/26
*/

#include <stdio.h>

//function prototype
float calculateElectricBill(int units);

int main()
{
    int units;
    float totalBill;

    printf("Enter the number of units consumed:\n");
    scanf("%d",&units);
    printf("::::::::::::::::::::::::::::::::::::::::::::::\n");

    totalBill = calculateElectricBill(units);
    printf("Your total electricity bill is KSh. %.2f\n", totalBill);

    return 0;
}


float calculateElectricBill(int units){
    float bill;

    if (units <= 100)
    {
        bill = units * 10;
    }
    else if (units <= 200)
    {
        bill = (100 * 10) + ((units - 100) * 15);
    }
    else
    {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}


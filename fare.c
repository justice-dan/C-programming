/* Name: Dan Omido
    Reg no.: CT100/G/30709/26
*/

#include <stdio.h>

// Function prototype
float calculateFare(float distance);

int main(){
    float distance, totalFare;

    printf("Enter the distance travelled in kilometres: ");
    scanf("%f", &distance);
    printf("::::::::::::::::::::::::::::::::::::::::::::::\n");

	//function call
    totalFare = calculateFare(distance);
    printf("Your total fare is KSh. %.2f\n", totalFare);

    return 0;
}

float calculateFare(float distance){

    float fare;

    fare = distance * 50;

    return fare;
}


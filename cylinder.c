/* Name: Dan Omido
    Reg no.: CT100/G/30709/26
*/

#include <stdio.h>

int main(){
    
    //declare and initiatialise variables
    float height; 
    float radius;
    double pi = 3.142;
    float volume;
    float surfacearea;
    
    printf("input height(cm):\t");
    scanf("%f", &height);
    
    printf("input radius(cm):\t");
    scanf("%f", &radius);
    printf("\n===========================================\n");
    
    volume = pi*radius*radius*height;
    surfacearea =2*pi*radius*radius+2*pi*radius*height;
    
    printf("The volume is:\t%.2f \n", volume);
    printf("find surfacearea:\t%.2f \n", surfacearea);
    
    return 0; //execusion successfull
}
  
    










































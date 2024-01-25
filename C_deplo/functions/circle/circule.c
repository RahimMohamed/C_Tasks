#include <stdio.h>
void circle (double num);
float i;
#define pi 3.14
int main()
{ 
    printf("Enter the Radius :\n");
    scanf("%f",&i);
    circle(i);


return 0;
}
void circle ( double num){
printf("The Diameter = %0.2f\n",(2*num));
printf("The circumference = %0.2f\n",(2*num*pi));
printf("The Area = %0.2f\n",(pi*num*num));

}
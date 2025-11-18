#include<stdio.h>

int main(){
    float radius,surface_area,volume;

    //input radius from the user
    printf("Enter radius of the sphere: ");
    scanf("%f",&radius);

    //calculate surface area and volume
    surface_area = 4*3.14*radius*radius;
    volume = 4/3*3.14*radius*radius*radius;

    //output the results
    printf("The surface area of the sphere is:%f\n",surface_area);
    printf("The volume of the sphere is:%f\n",volume);

return 0;}

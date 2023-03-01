//volume of a given cylinder
#include<stdio.h>
float cylindervol(float,float);
int main(int argc, char** argv)
{
    float cylindervolume;
    float cyradius,cyheight;
    printf("\n enter the radius of cylinder");
    printf("\n enter the height of cylinder ");
    scanf("%f %f",&cyradius,&cyheight);
    cylindervolume=cylindervol(cyradius,cyheight);
    printf("the volume:%.2f\n",cylindervolume);
    
    return 0;
}
float cylinder(float radius,float height){
    return 3.142*radius*radius*height;
}
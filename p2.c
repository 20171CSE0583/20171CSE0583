/* program to evalute an expression */
#include<stdio.h>
#define pi 3.141
void main() 
{
     float r,area;
     printf("enter the radius\n");
     scanf("%f",&r);
     area=pi*r*r; 
     printf("area(%f)=%f\n",r,area);
} 

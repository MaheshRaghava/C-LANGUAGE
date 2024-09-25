#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,s,Area;
printf("enter the first side\n");
scanf("%f",&a);
printf("enter the second side\n");
scanf("%f",&b);
printf("enter the third side\n");
scanf("%f",&c);
s=(a+b+c)/2;
printf("S=%f\n",s);
Area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area of triangle:%f",Area);}

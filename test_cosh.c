#include<math.h>
#include<stdio.h>

void main()
{
 float x,s0,s1,s2,s3,a0,a1,a2,a3,z0,z1,z2,z3;
 x = 2.0;

 a0 = pow(x,2)/(2*1);
 printf("%f  %f\n", a0, 0.0);
 a1 = pow(x,4)/(4*3*2*1);
 z1 = a0*pow(x,2)/(8*2*(2*2-1));
 printf("%f  %f\n", a1, z1);
 a2 = pow(x,6)/(6*5*4*3*2*1);
 z2 = z1*pow(x,2)/(8*3*(2*3-1));
 printf("%f  %f\n", a2, z2);
 a3 = pow(x,8)/(8*7*6*5*4*3*2*1);
 z3 = z2*pow(x,2)/(8*4*(2*4-1));
 printf("%f  %f\n", a3, z3);



}

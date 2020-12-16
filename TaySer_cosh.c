#include<stdio.h>
#include<math.h>

void main()
{
 double x,y;
 printf("Šī programma aprēķina cosh no x/2 funkcijas vērtības izmantojot Teilora rindu.\n");
 printf("Lūdzu ievadiet x: ");
 scanf(" %lf99", &x);

 FILE * printFile;
 printFile = fopen("cosh_dati.txt","w");
 fprintf(printFile,"x=%f             ", x);
 x=x/2;
 y=cosh(x);
 fprintf(printFile,"y=%f\n", y);
 fprintf(printFile,"###################\n");


 long double z=1.0;
 long double s=1.0;

 for(int a = 1; a<=500; a++)
 {
  z=z* pow(x,2)/(2*a*(2*a-1));
  s+=z;
  fprintf(printFile,"%d. %Lf     %Lf\n", a, z, s);

 }

 fclose(printFile);
}


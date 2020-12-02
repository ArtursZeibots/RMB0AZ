#include<stdio.h>
#include<math.h>

void main()
{
 float lowerLimit;
 float upperLimit;
 int valueCount;
 float xValues[] = {1,1};
 float yValues[] = {1,1};

 printf("Šī programma aprēķina cosh(x/2) vērtības un saglabā tās failā data.txt\n");
 printf("Lūdzu ievadiet x minimālo vērtību: ");
 scanf(" %f99", &lowerLimit);
 printf("Lūdzu ievadiet x maksimālo vērtību: ");
 scanf(" %f99", &upperLimit);
 printf("Lūdzu ievadiet cik vērtības aprēķināt:  ");
 scanf(" %d99", &valueCount);

 xValues[0] = lowerLimit;

 float stepSize = (upperLimit - lowerLimit)/(float)valueCount;

 for(int a=1; a<=valueCount; a++)
 {
  xValues[a] = xValues[a-1] + stepSize;
 }

 for(int b = 0; b<=valueCount; b++)
 {
  yValues[b] = cosh((xValues[b])/2);
 }

 FILE * dataFile;

 dataFile = fopen("data.txt", "w");

 fprintf(dataFile,"# cosh vērtības\n");
 fprintf(dataFile,"# X         # Y\n");

 for(int z = 1; z<=valueCount; z++)
 {
  fprintf(dataFile,"%.3f         %.3f\n", xValues[z], yValues[z]);
 }

 fclose(dataFile);
}

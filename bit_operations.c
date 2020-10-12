//operācijas
//bitu

#include<stdio.h>
#include<time.h>
int main ()
{
 char a = 5; // 0000 0101
 char b = 1;
//clock_t begin = clock();
 char c = a << b; // 0000 0101 << 1 -> 0000 1010


// clock_t end = clock();
// double time_spent =  (double)(end-begin) / CLOCKS_PER_SEC;

// printf("Reizināšana ar 2 ar << operāciju %g\n", time_spent);

 printf("%d << %d = %d\n",a,b,c);

// begin = clock();
  c = a * 2; // 0000 0101 << 1 -> 0000 1010


// end = clock();

// double time_spent (double)(end-begin) / CLOCKS_PER_SEC;

// printf("Reizināšana ar 2 ar * operāciju %g\n", time_spent);
 printf("%d << %d = %d\n",a,b,c);
 
 
/*
 b = 2;
 c = a << b;
 printf("%d << %d = %d\n",a,b,c);

 b = 3;
 c = a << b;
 printf("%d << %d = %d\n",a,b,c);
*/
a = 100;
b = 4;
c= a >> b;

printf("%d << %d = %d\n",a,b,c);
return 0;
}

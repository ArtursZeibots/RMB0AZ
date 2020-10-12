//operācijas
//loģiskās op

#include<stdio.h>

int main()
{
 char a = 5;
 char b = 1;

 char c = a&&b;
//AND
 printf("%d && %d = %d\n", a,b,c);

  a = 5;
  b = 2;
//salīdzināšana
  c = a<b;

 printf("%d <  %d = %d\n", a,b,c);

  c = a>b;

 printf("%d >  %d = %d\n", a,b,c);

  c = a<=b;

 printf("%d <=  %d = %d\n", a,b,c);
  c = a>=b;

 printf("%d >=  %d = %d\n", a,b,c);
  c = a==b;

 printf("%d ==  %d = %d\n", a,b,c);
  c = a=!b;

 printf("%d =!  %d = %d\n", a,b,c);

return 0;
}



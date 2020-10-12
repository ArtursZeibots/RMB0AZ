//operācijas
//operācijas rezultātam vienmēr ir kaut kāds tips
//operācijas rezultāta datu tips ir plašākais datu tips, kas piedalās operācijā
#include <stdio.h>


int main ()
{
 //a+b
 char a = 5;
 char b = 10;
 char c = a+b;
 printf("a+b=%d\n",a+b);
 printf("%d + %d = %d\n",a,b,c);
// /
 char d = a/b; //char / char -> char -> char
 printf("%d / %d = %d\n",a,b,d); //gaidam 5 / 10 = 0
 float dd = a/b; //char / char -> char -> float
 printf("%d / %d = %f\n",a,b,dd); //gaidam 5 / 10 = 0
 float aa = 5; 
 dd = aa/b; //float / char -> float -> float

 printf("%f / %d = %.1f\n",aa,b,dd); //gaidam 5 / 10 = 0


 printf("%d / %d = %.1f\n",a,b, (float)a/b); //gaidam 5 / 10 = 0

 printf("(float)a/b izmērs baitos: %ld\n",sizeof((float)a/b)); //gaidam 5 / 10 = 0
 //1 - int
 //1. - double
 //(char)1
 //(float)1
 //%

 char e = a % b;
 printf("%d %c %d = %d\n",a,37,b,e);
 printf("%d %c %d = %d\n",a,0x25,b,e);
 printf("%d %c %d = %d\n",a,'%',b,e);
 printf("%d %c %d = %d\n",999,37,990,999/990);

return 0;
}

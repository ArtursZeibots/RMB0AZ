#include <stdio.h>
#include<math.h>

double newCOSH(double x, double z)
{
    return (cosh(x/2)-z);
}

int main()
{
    double a,b,x,deltax,z;
    int iteracijas = 0;
    printf("Šī programma meklē funkcijas cosh(x/2)-z=0 sakni.\n");
    printf("Cien. lietotāj, Jums būs jāievada robežas starp kurām programma meklēs sakni\n");
    printf(" un būs arī jāievada skaitlis z\n");
    printf("Šī programma arī ļauj izvēlēties cik precīzu rezultātu jūs vēlaties.\n");
    printf("Lūdzu ievadiet zemāko robežu: ");
    scanf(" %lf", &a);
    printf("Lūdzu ievadiet augstāko robežu: ");
    scanf(" %lf", &b);
    printf("Lūdzu ievadiet skaitli z: ");
    scanf(" %lf", &z);
    printf("Lūdzu ievadiet precizitāti:");
    scanf(" %lf", &deltax);

    if(a>b)          //Šī daļa apgriež robežas ar vietām,
    {                //ja robežas ir ievadītas otrādi.
     int flipNum = a;
     a = b;
     b = flipNum;
    }


    if(newCOSH(a,z)*newCOSH(b,z)>0) //Šī daļa pārbauda vai lietotāja izvēlētajā
    {                               //intervālā ir sakne, kuru var atrast
                                   //ar izmantoto metodi.
     printf("Funkcijai f(x)=z intervālā (%.2lf;%.2lf) nav saknes,\n", a, b);
     printf("vai arī šajā intervālā ir vairāk par vienu sakni.\n");
     return 0;

    }

    while(b-a>deltax)
    {
     iteracijas++;
     x=(a+b)/2;
     if(newCOSH(a,z)*newCOSH(x,z)<0)
     {
      b=x;
     }
      else
      {
       a=x;
      }
    }

    printf("cosh(x/2)-z = 0, ja x = %lf\n",x);
    printf("cosh(x/2)=z, ja x = %lf un z = %lf\n",x, newCOSH(x,z)+z);
    printf("Uzdevuma veikšanai vajadzēja %d iteracijas.\n",iteracijas);
     return 0;
}

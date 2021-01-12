#### 2. Laboratorijas darbs
# Cosh(x/2)-z=0 sakņu aprēķināšana, izmantojot Dihtomijas metodi.

#### Darba uzdevums
Izstrādāt programmu, kura meklē cosh(x/2)-z=0 saknes izmantojot lietotāja ievadītus meklēšanas kritērijus.
#### Kods un tā apraksts
```c
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
```
Arī šeit bija jāpielieto math.h un stdio.h bibliotēkas, jo vajadzīgs dialogs ar lietotāju un vajadzīga math.h pieejamā cosh funkcija.
```c
#include <stdio.h>
#include<math.h>
```
Lai uzlabotu koda pāredzamību un atvieglotu rakstīšanu izveidoju funkciju **newCOSH** , kurai jāiedod x un z vērtība un tā atgriež funkcijas f(x)=cosh(x/2)-z vērtību.
```c
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
```
Augstāk redzamajā daļā notiek mainīgo deklarēšana, dialogs ar lietotāju un lietotāja ievadīto vērtību nolasīšana.

Zemāk redzamajā daļā tiek pārbaudīts vai lietotājs ievadījis robežas vēlamajā secībā, un ja tiek konstatēts, ka a ir lielāks par b šīs vērtības tiek samainītas ar vietām izmantojot papildus mainīgo.
```c
if(a>b)          //Šī daļa apgriež robežas ar vietām,
    {                //ja robežas ir ievadītas otrādi.
     int flipNum = a;
     a = b;
     b = flipNum;
    }
```
Nākamajā daļā tiek pārbaudīts vai lietotāja ievadītajā intervālā ir iespējams atrast vienādojuma saknes, jo situācijā, kad grafiks krusto x asi 2^n(kur n ir vesels, pozitīvs skaitlis) reizes dotajā intervālā nav iespējams atrast saknes izmantojot Dihtomijas metodi.
```c
if(newCOSH(a,z)*newCOSH(b,z)>0) //Šī daļa pārbauda vai lietotāja izvēlētajā
    {                               //intervālā ir sakne, kuru var atrast
                                   //ar izmantoto metodi.
     printf("Funkcijai f(x)=z intervālā (%.2lf;%.2lf) nav saknes,\n", a, b);
     printf("vai arī šajā intervālā ir vairāk par vienu sakni.\n");
     return 0;
```
Šajā daļā tiek meklēti krustpunkti ar x asi, attiecīgi intervālu sadala uz pusēm un pārbauda, kuras puses robežu reizinājums ir negatīvs, kad tas ir izdarīts tiek piešķirtas jaunas robežu vērtības "negatīvajam" intervālam un cikls atkal tiek sākts no sākuma, līdz ir sasniegta vajadzīgā precizitāte.
```c
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
```
Beigās tiek izvadīts iegūtais rezultāts un programma tiek beigta.
```c
printf("cosh(x/2)-z = 0, ja x = %lf\n",x);
    printf("cosh(x/2)=z, ja x = %lf un z = %lf\n",x, newCOSH(x,z)+z);
    printf("Uzdevuma veikšanai vajadzēja %d iteracijas.\n",iteracijas);
```
#### Secinājumi
Šī metode ir daudz ātrāka par citām sakņu meklēšanas metodēm, piemēram, sadalot intervālu mazās daļās un pārbaudot katru daļu.

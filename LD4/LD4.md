#### 4. Laboratorijas darbs
# COSH(x/2) integrāļa aprēķināšana izmantojot 3 dažādas metodes
#### Darba uzdevums
Izveidot programmu, kura aprēķina cosh(x/2) integrāļa vērtību lietotāja noteiktā intervālā.
#### Kods un tā apraksts
```c
#include <stdio.h>
#include<math.h>
void rectIntegral(double start, double end, double iedala);
void trapIntegral(double start, double end, double incr);
void simpIntegral(double first, double second, double prec, double count);
int main()
{
    double x,a,b, increment;
    int n;
    printf("Šī programma aprēķina cosh(x/2) integrāļa vērtību.\n");
    printf("Lūdzu ievadiet apakšējo robežu: ");
    scanf(" %lf", &a);
    printf("Lūdzu ievadiet augšējo robežu: ");
    scanf(" %lf", &b);
    printf("Lūdzu cik daļās sadalīt intervālu: ");
    scanf(" %d", &n);
    increment = (b-a)/n;
    rectIntegral(a,b,increment);
    trapIntegral(a,b, increment);
    simpIntegral(a,b,increment, n);
    return 0;
}

void rectIntegral(double a, double b, double iedala)
{
    double x=a, integ = 0;
    
    while(x<b) 
    { // Taisnstūra metode
        x+=iedala;
        integ+=(x-a)*(cosh(a/2));
        a=x;
    }
       printf("Integrālis izmantojot četrstūra metodi ir %lf\n", integ);
}

void trapIntegral(double start, double end, double incr)
{
    double x = start, integ = 0;
    while(x<end)
    { // Trapaces metode
        x += incr;
        integ +=(cosh(x/2)+cosh(start/2))/2*(x-start);
        start = x;
    }
    
    printf("Integrālis izmantojot trapeces metodi ir %lf\n", integ);
}

void simpIntegral(double first, double second, double prec, double count)
{
    double integ = 0;
    double x;
    int i;
    for(i=0;i<count;i++);
    {
        integ += 4*cosh((first+i*prec)/2)+2*cosh((first+(1+i)*prec)/2);
    }
    
    integ*=(1.0/3);
    
    printf("Integrālis izmantojot Simpsona 1/3 metodi ir %lf", integ);
    
}
```
Koda sākuma, protams, sākās ar math.h un stdio.h bibliotēku pievienošanu, un dialogu are lietotāju, lietotāja ievadīto vērtību nolasīšanu.

Lai pārbaudītu vai integrālis tiek aprēķināts pareizi, izmantoju WolframAlpha, zemāk redzams programmas darbība un izvads konsolē un WolframAlpha iegūtais rezultāts

![Konsoles izvads](https://github.com/ArtursZeibots/RTR105/blob/master/LD4/integral_izvads.png)

![Pārbaude ar WolframAlpha](https://github.com/ArtursZeibots/RTR105/blob/master/LD4/integral_proof.png)

Uzskatu, ka ar programmu iegūtais integrālis ir pietiekami precīzs.

Ar trapeces metodi iegūtais rezultāts ir neprecīzāks, taču šo problēmu var atrisināt ar sadalot intervālu vēl mazākās daļās.

Ar Simpsona metodes implementāciju radās problēmas, tāpēc es daļēji izmantoju [šajā vietnē pieejamo implementāciju.](https://livedu.in/simpsons-1-3rd-rule-algorithm-implementation-in-c-with-solved-examples/)

#### Secinājumi

Visprecīzākais rezultāts radās izmantojot Simpsona 1/3 metodi, taču šīs metodes implementācija bija vissarežģītākā.

Četrstūra metodes rezultāts bija arī ļoti tuvs Simpsona metodes rezultātam, tāpēc uzskatu, ka četrstūra metodes ir piemērotākā integrāļa aprēķināšanai, jo tās rezultāts bija precīzs un šīs metodes implementācijas bija visvienkāršākā un prasīja vismazāk darbības.

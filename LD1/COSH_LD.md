#### 1. Laboratorijas darbs
## F(x)=Cosh(x/2) vērtības aprēķināšāna izmantojot Teilora rindas

### Darba uzdevums
Izstrādāt programmu, kura lietotāja ievadītai x vērtībai aprēķina funkcijas vērtību, izmantojot Teilora rindas.
### Kods
```c
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
  if((z/pow(x,2)/(2*a*(2*a-1)) == z))
  {
   break;
  }

 }

 fclose(printFile);
}
```
### Apraksts
Pirms koda izstrādes uzsākšanas bija jānosaka Cosh(x/2) Teilora rindas kārtas reizinātājs. Šis posms aizņēma visvairāk laika, jo šī reizinātāja iegūšana no Teilora rindas formulas bija sarežģīta.
```c
#include<stdio.h>
#include<math.h>
 ```
 Tā kā šajā kodā tiek izmantotas matemātiskas formulas, kuru aprēķina funkcijas ir pieejamas **math.h** bibliotēkā, lai nodrošinātu dialogu ar lietotāju tiek izmantotas **stdio.h** pieejamās funkcijas.
 
 ```c
 double x,y;
 printf("Šī programma aprēķina cosh no x/2 funkcijas vērtības izmantojot Teilora rindu.\n");
 printf("Lūdzu ievadiet x: ");
 scanf(" %lf99", &x);
 ```
 main funkcijā kods tiek sākts ar x un y deklarēšanu, pēc tam seko saziņa ar lietotāju un lietotāja ievadītās vērtības nolasīšana.
 
 ```c
 FILE * printFile;
 printFile = fopen("cosh_dati.txt","w");
 fprintf(printFile,"x=%f             ", x);
 x=x/2;
 y=cosh(x);
 fprintf(printFile,"y=%f\n", y);
 fprintf(printFile,"###################\n");
```
Šīs koda daļas sākumā tiek izveidots pointeris uz failu, un izveidot fails izdrukai. Pēc šīm operācijām seko izdrukas faila hedera izveidošana, un tajā ietveramo vērtību aprēķināšana.
```c
long double z=1.0;
 long double s=1.0;

 for(int a = 1; a<=500; a++)
 {
  z=z* pow(x,2)/(2*a*(2*a-1));
  s+=z;
  fprintf(printFile,"%d. %Lf     %Lf\n", a, z, s);
  if((z/pow(x,2)/(2*a*(2*a-1)) == z))
  {
   break;
  }

 }
```
Šajā koda daļā tiek aprēķināta x vērtība izmantojot Teilora rindu. Šī daļa sākās ar divu, aprēķinos vajadzīgu mainīgo deklarēšanu un vērtību piešķiršanu tiem.
Pēc tam seko *for* cikls, kurā tiek aprēķināta Teilora rindas locekļu summa. Šajā ciklā ir arī if operācija, kuras mērķis ir beigt ciklu, ja z vērtības vairs nemainās pirms a ir sasniedzis skaitli 500.
### Izdrukas fails


### Secinājumi

Funkcijas vērtības aprēķināšana izmantojot Teilora rindu man šķiet nevajadzīgi sarežģīta, ja ir iespējams iegūt funkcijas vērtību izmantojot math.h pieejamās funkcijas.


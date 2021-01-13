#### 5. Laboratorijas darbs
# Simbolu rindas kārtošana, modas, mediānas noteikšana
#### Darba uzdevums
Izveidot programmu, kura sakārto lietotāja ievadītu simbolu rindu, noteikt rindas mediānu un modu.
#### Kods un tā apraksts
Darbu sāku ar informācijas meklēšanu par kārtošanas algoritmiem.
Pēc izpētes nolēmu izmantot *quicksort* algoritmu, jo vairākos informācijas avotos tas tika nosaukts par vienu no ātrākajiem
kārtošanas algoritmiem. Pēc dziļākas quicksort izpētes secināju, ka neizprotu kā to implementēt, un nolēmu izmantot *bubble sort*, kuru implementēt kodā ir daudz vieglāk.
Kaut gan bubble sort algoritms ir jūtami lēns(pauze starp ievadi un izvadi mēdz būt vairāk par 3 sekundēm), domāju, ka tas ir pieņemami šajā situācijā, bet ātrāki kārtošanas
algoritmi būtu ieteicami programmās, kur vajadzīgs lielāks datu apstrādes ātrums.

![Histogramma](https://github.com/ArtursZeibots/RTR105/blob/master/LD5/chart.png)
```c
#include <stdio.h>

int main()
{
    char array[100] = "";
    char uniqueArray[100] = "";
    char counterArray[100] = "000";
    char min, max, median;
    char flip;
    int i,n,k,modeCounter = 0, counter=0;
    
    printf("Lūdzu ievadiet sakārtojamo simbolu virkni (<100 simboliem): ");
    scanf(" %s", &array);
    printf("\n");
    //Saskaita cik simbolu ir virknē
    while(array[counter] != 0)
    {
      counter++;   
    }
    // Sakārto simbolus augošā secībā
    for(n=0;n<counter;n++)
    {
        for(i=0;i<counter-1;i++)
        {
            if(array[i]>array[i+1])
            {
                flip = array[i];
                array[i] = array[i+1];
                array[i+1] = flip;
            }
        }
    }
    //Katru unikālo simbolu ieliek citā virknē
    n=0;
    for(i=0;i<counter;i++)
    {
        if(array[i] != array[i-1])
        {
            uniqueArray[n] = array[i];
            n++;
        }
    }
    // Saskaita cik katra veida simbolu ir
    for(i=0; i<n;i++)
    {
        for(k=0;k<counter;k++)
        {
            if(uniqueArray[i] == array[k]) modeCounter++;
        }
        counterArray[i] = modeCounter;
        modeCounter = 0;
    }
    //Sakārto unikālo simbolu virkni augošā secībā, balstoties uz katra simbola skaitu
    for(i=0;i<n;i++)
    {
        for(k=0; k<n-1;k++)
        {
            if(counterArray[k]>counterArray[k+1])
            {
                flip = counterArray[k];
                counterArray[k] = counterArray[k+1];
                counterArray[k+1] = flip;
                flip = uniqueArray[k];
                uniqueArray[k] = uniqueArray[k+1];
                uniqueArray[k+1] = flip;
            }
        }
    }
    //Izdruka
    printf("MAX vērtība ir %c\n", array[counter]);
    printf("MIN vērtība ir %c\n", array[0]);
    if(counter%2 !=0)
    {
        printf("Mediāna ir %c\n", array[counter/2-1]);
    }else{ 
        printf("Mediāna nav\n");
    }
    printf("Moda/as ir ");
    if(counterArray[n] = counterArray[n-1])
    {
        if(counterArray[n] = counterArray[n-2])
        {
            printf("%c %c %c\n", uniqueArray[n], uniqueArray[n-1], uniqueArray[n-2]);
        }
    }
    else if(counterArray[n] = counterArray[n-1])
    {
        printf("%c %c\n", uniqueArray[n], uniqueArray[n-1]);
        
    }else
    {
        printf("%c\n", uniqueArray[n]);
    }
    for(i=0;i<counter;i++)
    {
        printf("%c ", array[i]);
    }
    printf("\n");
    for(i=0;i<counter;i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
```
Šī koda daļa bija vajadzīga, jo izmantoju virkni ar noteiktu izmēru, un pastāv iespēja, ka lietotājs ar savu ievadi to nepiepilda,
tas novestu pie "null" simbolu iekļaušanas turpmākajās darbībās, tā kā tas nav ieteicami, šī koda daļa saskaita cik rindā ir ne-"null" simbolu.
```c
while(array[counter] != 0)
    {
      counter++;   
    }
  ```
Zemāk redzams ir koda fragments, kurā implementēta bubble sort kārtošanas metodi:
```c
for(n=0;n<counter;n++)
    {
        for(i=0;i<counter-1;i++)
        {
            if(array[i]>array[i+1])
            {
                flip = array[i];
                array[i] = array[i+1];
                array[i+1] = flip;
            }
        }
    }
    ```
Tā kā rindā var būt vairākas modas izveidoju ciklus, kas pārbauda visu rindu un ievieto katru unikālo simbolu speciāli tiem izveidotā rindā.
```c
n=0;
    for(i=0;i<counter;i++)
    {
        if(array[i] != array[i-1])
        {
            uniqueArray[n] = array[i];
            n++;
        }
    }
    ```
Pēc tam seko nākamais cikls, kurā tiek saskaitīts, cik katra veida simbolu ir galvenajā virknē, šīs vērtības tiek sakārtotas augošā secībā, kopā ar unikālo simbolu virkni.
```c
for(i=0;i<n;i++)
    {
        for(k=0; k<n-1;k++)
        {
            if(counterArray[k]>counterArray[k+1])
            {
                flip = counterArray[k];
                counterArray[k] = counterArray[k+1];
                counterArray[k+1] = flip;
                flip = uniqueArray[k];
                uniqueArray[k] = uniqueArray[k+1];
                uniqueArray[k+1] = flip;
            }
        }
    }
    ```
Diemžēl šī programma var izdrukāt tikai trīs modas, jo nevarēju izdomāt kā implementēt kodā algoritmu, kas izdrukāt vairāk modas.
```c
if(counterArray[n] = counterArray[n-1])
    {
        if(counterArray[n] = counterArray[n-2])
        {
            printf("%c %c %c\n", uniqueArray[n], uniqueArray[n-1], uniqueArray[n-2]);
        }
    }
    else if(counterArray[n] = counterArray[n-1])
    {
        printf("%c %c\n", uniqueArray[n], uniqueArray[n-1]);
        
    }else
    {
        printf("%c\n", uniqueArray[n]);
    }
    ```
#### Secinājumi
Lai implementētu efektīvu kārtošanas algoritmu vajadzīga laba C valodas prasme.

Algoritmu izpētes laikā secināju, ka ir diezgan daudz dažādu kārtošanas algoritmu.

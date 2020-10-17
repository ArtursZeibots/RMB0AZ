//dec2bin konvertētājs
//Autors: Artūrs Zeibots
//maksimālā decimālā skaitļa vērtība: 255
//ja char aizstāj ar int šo konvertētāju var izmantot arī 16bit skaitļiem

#include<stdio.h>

void main()
{
  char kartas_skaitlis = 0;
  unsigned char dec_skaitlis;
  char rezultats[9] = "aaaaaaaa";

  printf("Lūdzu ievadiet skaitli decimālā formātā: ");
  scanf("%hhd99", &dec_skaitlis);

  for(unsigned char a = 128;a>0;a=a>>1) //izveido mainīgo a, kura binārā vērtība ir 1000 0000, katru ciklu pārbīda tā bitus par 1 bitu uz labo pusi.
  {
    if((a & dec_skaitlis) != 0){ //izmantojot bitu AND operāciju iet cauri
                                 //visiem bitiem iegūstot vai bits šajā
                                 //pozīcijā ir 0 vai 1
     rezultats[kartas_skaitlis] = '1';

  }else
    {
     rezultats[kartas_skaitlis] = '0';
    }
  kartas_skaitlis++;
  }
 printf("Šis skaitlis binārajā sitēmā ir: %s\n", rezultats);
}

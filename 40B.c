#include<stdio.h>

void main()
 {
  int pirmais_skaitlis = 0;
  int otrais_skaitlis = 0;
  long int tresais_skaitlis = 0;

  printf("Lūdzu ievadiet skaitli 400 000:");
  scanf("%d", &pirmais_skaitlis);

  printf("Lūdzu ievadiet skaitli 100 000:");
  scanf("%d", &otrais_skaitlis);

  tresais_skaitlis = (long int)pirmais_skaitlis * otrais_skaitlis;
  printf("Skaitļu %d un %d reizinājums ir %ld\n", pirmais_skaitlis, otrais_skaitlis, tresais_skaitlis);


}


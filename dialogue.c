#include<stdio.h>
void main()
{
char simbols = 'a';
printf("Lūdzu ievadiet, kādu simbolu: ");
scanf("%c", &simbols);
printf("Jūsu ievadītais simbols ir: %c\n", simbols);
printf("Jūsu ievadītais simbols kā hexadecimāls skaitlis ir: %x\n", simbols);
printf("Jūsu ievadītais simbols kā decimāls skaitlis ir: %d\n", simbols);
printf("Jūsu ievadītais simbols kā oktāls skaitlis ir: %o\n", simbols);

}

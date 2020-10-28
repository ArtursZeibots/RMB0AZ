#include<stdio.h>
#include<limits.h>

void greetings_function();
int input_function();
int calculations_function(int a, int b);
void output_function(int a, int b,int rez);

void main()
{
 int skaitlis_1, skaitlis_2;

 greetings_function();
 skaitlis_1 = input_function();
 skaitlis_2 = input_function();
 output_function(skaitlis_1, skaitlis_2,calculations_function(skaitlis_1, skaitlis_2));
}

void greetings_function()
{
 printf("Labdien! Šī programma saskaitīs divus decimālus skaitļus.\n");
}

int input_function()
{
 int skaitlis = 1;
 printf("Lūdzu ievadiet decimālu skaitli: ");
 scanf("%d", &skaitlis); 
 return skaitlis;
}

int calculations_function(int a, int b)
{
 int rez = a + b;
 return rez;
}

void output_function(int a, int b, int rez)
{
 printf("%d + %d = %d\n",a,b,rez);
}

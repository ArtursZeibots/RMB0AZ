//kods dažādu datu tipu pētīšanai
// Info vien, ar kurām operē cilvēks - simboli, skaitļi
// simboli: burti, cipari, interpunkcijas zīmes, utt. - ASCII ir simboli

//skaitļi: veseli sk., reali sk., dec. sk., kompleksie sk. (divas daļas - Re un Im)

//Info vien, kuru operē dators - bits (0/1)
//Info vien, ar  adresi dators - baits
// 1 byte  == 8 bits
// ASCII table - one symbol == 1 byte
// unique binary combinations == 2^8 = 256
// ASCII stand 1. daļā 128 simb

#include<stdio.h>
#define A 11
void main()
{
 char a = 10; // char var izmantot arī maziem skaitļiem. (=) - piešķiršanas op.
 // 1. darb. - RAM atmiņā tiek atvēlēta vieta viena char datu tipa manīgā glabāšanai
 //-šī vieta ir viennozīmīgi saķēdēta ar identifikatoru a, bet vietai arī ir adrese
 // saskaņā ar char datu tipu vietas izmērs ir 1 byte
 // Kā šajā brīdī izskatījās atmiņas apgabals 
 // char a; // deklarēšāna
 // 2. darbība - vērtības piešķiršana
 // a = 10; // vērtības piešķiršana
 // a -> 0000 1010
 printf("Mainīgā a vērtība (laika momentā t1) ir %d\n", a);
a = 125;
 printf("Mainīgā a vērtība (laika momentā t2) ir %d\n", a);
 printf("Mainīgā a vērtība (laika momentā t3) ir %d\n", A);
 // A = 125; // mainīt konstanti nevar
 //printf("Mainīgā a vērtība (laika momentā t3) ir %d\n", A);
 char mans_mainigais = 45; //centisimies izmantot menemoniskos nosaukumus
 // nos. atspoguļo main jēgu
 a = 0x10;
 printf("Mainīgā a vērtība (laika momentā t4) ir %d\n", a);
 // %d - dec; %o - oct; %h - hex
 a = 65;
 printf("Mainīgā a vērtība ir %d\n", a);
 printf("Mainīgā a vērtība ir %x\n", a);
 printf("Mainīgā a vērtība ir %o\n", a);
 printf("Mainīgā a vērtība ir %c\n", a);

// main. a vērt kā simb
 printf("Mainīgā a vērtība (laika momentā t4) ir %c\n", a);

 // kā simb
 a = 'k';
 printf("Mainīgā a vērtība ir %d\n", a);
 printf("Mainīgā a vērtība ir %x\n", a);
 printf("Mainīgā a vērtība ir %o\n", a);
 printf("Mainīgā a vērtība ir %c\n", a);
 //cplusplus.com // printf
// => bez zīmes 0-255
// ar zīmi  -128 ... 0 ... 127
 // a>258 => 2, jo char noņem overflow
 unsigned char b = 128;
 printf("Mainīgā b vērtība ir %d\n", b);

//int
int c;

printf("int izmērs baitos %ld\n", sizeof(c));

//-----------------------------------------------------
float d = 6.5;
printf("int izmērs baitos %.2f\n", d); // .2 divas zīmes aiz komata

}

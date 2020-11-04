#include <stdio.h>

void main()
{
    long long input_num;
    char charNum = 1;
    long long longNum = 1;
    int intNum = 1;
    char choice;
    printf("Lūdzu ievadiet decimālu skaitli: ");
    scanf("%lld99", &input_num);
    printf("Lūdzu ievadiet tā datu tipa pirmo burtu, kādā vēlaties iegūt rezultātu: ");
    scanf(" %c99", &choice);
    if(choice == 'c')
    {
        unsigned char reference = 1;
        for(int counter = 1;counter < input_num; counter++)
        {
        
            charNum *= (counter + 1);
            reference *= (counter + 1);
            if(charNum != reference){
                break;
                printf("Izvēlēts nepietiekama izmēra datu tips, faktoriālis no %lld neietilpst char datu tipā\n", input_num);
            }
        }
        if(charNum == reference)
        {
            printf("Faktoriālis no skaitļa %lld ir %d\n", input_num, charNum); 
        }
        
    
    
    }else if(choice == 'i')
    {
        unsigned int reference = 1;
        for(int counter = 1;counter < input_num; counter++)
        {
        
            intNum *= (counter + 1);
            reference *= (counter + 1);
            if(intNum != reference){
                break;
                printf("Izvēlēts nepietiekama izmēra datu tips, faktoriālis no %lld neietilpst int datu tipā\n", input_num);
            }
        }
        if(intNum == reference)
        {
            printf("Faktoriālis no skaitļa %lld ir %d\n", input_num, intNum); 
        }
    }else if(choice == 'l')
    {
        unsigned long long reference = 1;
        for(long long counter = 1;counter < input_num; counter++)
        {
        
            longNum *= (counter + 1);
            reference *= (counter + 1);
            if(longNum != reference){
                break;
                printf("Izvēlēts nepietiekama izmēra datu tips, faktoriālis no %lld neietilpst char datu tipā\n", input_num);
            }
        }
        if(longNum == reference)
        {
            printf("Faktoriālis no skaitļa %lld ir %d\n", input_num, charNum); 
        }
    }
}

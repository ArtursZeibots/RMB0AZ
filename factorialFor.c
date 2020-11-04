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
        char reference = 1;
        for(int counter = 1;counter < input_num; counter++)
        {
        
            charNum *= (counter + 1);
            reference *= counter;
            if((charNum/(counter + 1)) != reference){
                
                printf("Izvēlēts nepietiekama izmēra datu tips, faktoriālis no %lld neietilpst char datu tipā\n", input_num);
            
                break;
            }
        }
        if(charNum == reference * input_num)
        {
            printf("Faktoriālis no skaitļa %lld ir %d\n", input_num, charNum); 
        }
        
    
    
    }else if(choice == 'i')
    {
        int reference = 1;
        for(int counter = 1;counter < input_num; counter++)
        {
        
            intNum *= (counter + 1);
            reference *= counter;
            if(intNum/(counter + 1) != reference){
                
                printf("Izvēlēts nepietiekama izmēra datu tips, faktoriālis no %lld neietilpst int datu tipā\n", input_num);
            
                break;
            }
        }
        if(intNum == reference * input_num)
        {
            printf("Faktoriālis no skaitļa %lld ir %d\n", input_num, intNum); 
        }
    }else if(choice == 'l')
    {
        long long reference = 1;
        for(long long counter = 1;counter < input_num; counter++)
        {
        
            longNum *= (counter + 1);
            reference *= counter;
            if(longNum/(counter + 1) != reference){
                
                printf("Izvēlēts nepietiekama izmēra datu tips, faktoriālis no %lld neietilpst long long datu tipā\n", input_num);
            
                break;
            }
        }
        if(longNum == reference * input_num)
        {
            printf("Faktoriālis no skaitļa %lld ir %lld\n", input_num, longNum); 
        }
    }
}

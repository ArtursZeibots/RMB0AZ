#include <stdio.h>

void main()
{
    long long input_num;
    char charNum;
    long long longNum;
    int intNum;
    char choice;
    long long reference;
    printf("Lūdzu ievadiet decimālu skaitli: ");
    scanf("%lld99", &input_num);
    printf("Lūdzu ievadiet tā datu tipa pirmo burtu, kādā vēlaties iegūt rezultātu: ");
    scanf(" %c99", &choice);
    int counter = 1;
    long long result_reference;
    while(counter <= input_num)
    {
        result_reference *= counter * (counter + 1);
        counter++;
    }
    counter = 1;
    if(choice == 'c')
    {
        while(counter <= input_num)
        {
        
            charNum *= counter * (counter + 1);
            reference *= counter * (counter + 1);
            counter++;
            if(charNum != reference){
                break;
            }
        }
        if((long long)charNum != result_reference)
        {
            printf("Izvēlēts nepietiekama izmēra datu tips, faktoriālis no %lld neietilpst char datu tipā\n", input_num);
            
         
        
        }else
        {
            
         printf("Faktoriālis no skaitļa %lld ir %d\n", input_num, charNum);    
        }   
    
    reference = input_num;
    }else if(choice == 'i')
    {
        while(counter <= input_num)
        {
        
            intNum *= counter * (counter + 1);
            reference *= counter * (counter + 1);
            counter++;
            if(intNum != reference){
                break;
            }
            }if((long long)intNum != result_reference)
            {
                printf("Izvēlēts nepietiekama izmēra datu tips, faktoriālis no %lld neietilpst int datu tipā\n", input_num);
             
         
         
        } else
        {
            printf("Faktoriālis no skaitļa %lld ir %d\n", input_num, intNum);
            
        }  
        
    reference = input_num;
    }else if(choice == 'l')
    {
        while(counter <= input_num)
        {
        
            longNum *= counter * (counter + 1);
            reference *= counter * (counter + 1);
            counter++;
            if(longNum != reference){
                break;
            }
        }
        printf("Skaitļa %lld faktoriālis ir %lld\n", input_num, longNum);

    }
}

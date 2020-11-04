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
    int counter = 1;
    if(choice == 'c')
    {
        char reference = 1;
        while(counter <= input_num)
        {
            
            charNum *= (counter + 1);
            
            
               reference *= counter; 
                
            
            
            
            if((charNum/(counter + 1)) != reference)
            {
                
                printf("Char datu tips ir pārāk mazs, lai glabātu %lld faktoriāli\n", input_num);
                break;
            }
            counter++;
            
        }
        if(charNum == reference * input_num)
        {
            printf("Faktoriālis no skaitļa %lld ir %d", input_num, charNum);
            
        }
        
    }else if(choice == 'i')
    {
        int reference = 1;
        while(counter <= input_num)
        {
            
            intNum *= (counter + 1);
            
            
               reference *= counter; 
                
            
            
            
            if((intNum/(counter + 1)) != reference)
            {
                
                printf("Int datu tips ir pārāk mazs, lai glabātu %lld faktoriāli\n", input_num);
                break;
            }
            counter++;
            
        }
        if(intNum == reference * input_num)
        {
            printf("Faktoriālis no skaitļa %lld ir %d", input_num, intNum);
            
        }
        
            
    }else if(choice == 'l')
    {
        long long reference = 1;
        while(counter <= input_num)
        {
            
            longNum *= (counter + 1);
            
            
               reference *= counter; 
                
            
            
            
            if((longNum/(counter + 1)) != reference)
            {
                
                printf("Long long datu tips ir pārāk mazs, lai glabātu %lld faktoriāli\n", input_num);
                break;
            }
            counter++;
            
        }
        if(longNum == reference * input_num)
        {
            printf("Faktoriālis no skaitļa %lld ir %d", input_num, longNum);
            
        }
    }
}

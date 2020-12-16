#include <stdio.h>
#include<math.h>

double newCOSH(double x, double z)
{
    return cosh(x/2)-z;
}

int main()
{
    double a,b,x,deltax,A,h;
    printf("Lūdzu ievadiet zemāko robežu a: ");
    scanf(" %lf", &a);
    printf("Lūdzu ievadiet augstāko robežu b: ");
    scanf(" %lf", &b);
    printf("Lūdzu ievadiet meklējamo skaitli A: ");
    scanf(" %lf", &A);
    
    deltax = 0.1;
    x=a;
    
    while(x<b)
    {
        h=x;
        printf("%lf   %lf\n", x, newCOSH(x, A));
        if((newCOSH(x,A)*(newCOSH(x-deltax, A)) < 0))
        {
        
            printf("#############\n");
            x-=deltax;
            b=h;
            deltax*=0.1;
            
            
        }
        
            x+=deltax;
        
    }
    

    return 0;
}

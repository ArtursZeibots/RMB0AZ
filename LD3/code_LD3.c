#include<math.h>
#include<stdio.h>

int main()
{
 FILE * dataFile;
 dataFile = fopen("derative.dat","w");
 //mainīgie
 const int N = 100;
 double x,a,b,deltax;
 int counter = 0;
 double xi[N], y[N], f_prim_a[N], f_prim_d[N], s_prim_a[N], s_prim_d[N];
 //ievade
 printf("Šī programma aprēķina cosh(x/2) prim1, prim2,\n izmantojot gan analītisko formulu, gan diferenic.\n");
 printf("Lūdzu ievadiet zemāko robežu: ");
 scanf(" %lf", &a);
 printf("Lūdzu ievadiet augstāko robežu: ");
 scanf(" %lf", &b);
 printf("Lūdzu ievadiet par cik palielināt x katru ciklu: ");
 scanf(" %lf", &deltax);
 //šī daļa apgriež robežas ar vietām, ja tās ir ievadītas otrādi
 if(a>b)
  {
    double flip = a;
    a=b;
    b=flip;
  }
 //šī daļa aprēķina visas x vērtības noteiktajā intervālā
 x=a;
 for(int i = 0; i<N; i++)
  {
    if(x>b) break;
    counter++;
    xi[i] = x;
    y[i] = cosh(x/2);
    x+=deltax;
  }
 //šī daļā aprēķina visus prim
 for(int i = 0; i<counter; i++)
  {
    if(xi[i]>b)break;
    f_prim_a[i] = 0.5*(sinh((xi[i])/2));
    f_prim_d[i] = ((y[i+1]-y[i])/deltax);
    s_prim_a[i] = 0.25*(y[i]);
    s_prim_d[i] = (y[i+1]-2*y[i]+cosh((x-deltax)/2))/(pow(deltax,2));
  }

 fprintf(dataFile,"\tx\tcosh(x)\t\t         cosh\'(x/2)\t         cosh\'(x/2)\t         cosh\"(x/2)\t        cosh\"(x/2)\n");
 fprintf(dataFile,"\t\tanalytic formula\tfinite difference\tanalytic formula\tfinite difference\n");
 for(int i = 0; i<counter; i++)
  {
    fprintf(dataFile,"%.2lf\t%.2lf\t\t%.2lf\t\t\t%.2lf\t\t\t%.2lf\t\t\t%.2lf\n", xi[i], y[i], f_prim_a[i], f_prim_d[i], s_prim_a[i], s_prim_d[i]);
  }
 fclose(dataFile);

 return 0;

 
}

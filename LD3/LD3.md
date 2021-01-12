#### 3. Laboratorijas darbs
# Cosh(x/2) pirmās un otrās pakāpes atvasinājumi, izmantojot gan analītiskās formulas, gan diferenciāļa formulu.
#### Darba uzdevums
Izstrādāt programmu, kura aprēķina cosh(x/2) pirmās un otrās pakāpes atvasinājumu vērtības noteiktā intervālā, un izdrukā tās glīti noformētā failā.
#### Kods, izdrukas fails un to apraksts.
Kods
```c
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
```
Kā jau visos iepriekšējos laboratorijas darbos arī šajā bija jāizmanto math.h un stdio.h bibliotēkas.
Kods sākas ar izdrukas faila pointera izveidošanu un paša faila izveidošanu, un ar mainīgo un virkņu deklarēšanu:
```c
FILE * dataFile;
 dataFile = fopen("derative.dat","w");
 //mainīgie
 const int N = 100;
 double x,a,b,deltax;
 int counter = 0;
 double xi[N], y[N], f_prim_a[N], f_prim_d[N], s_prim_a[N], s_prim_d[N];
```
Šī daļa apgriež vērtības, ja tās ir ievadītas otrādi:
```c
if(a>b)
  {
    double flip = a;
    a=b;
    b=flip;
  }
  ```
Nākamajā daļa tiek aprēķinātas x vērtības, balstoties uz lietotāja ievadītajiem datiem, kā arī šeit counter mainīgais saskaita cik x vērtības ir iegūtas:
```c
x=a;
 for(int i = 0; i<N; i++)
  {
    if(x>b) break;
    counter++;
    xi[i] = x;
    y[i] = cosh(x/2);
    x+=deltax;
  }
```
Šeit tiek aprēķinātas vajadzīgās funkcijas un tās atvasinājumu vērtības:
```c
for(int i = 0; i<counter; i++)
  {
    if(xi[i]>b)break;
    f_prim_a[i] = 0.5*(sinh((xi[i])/2));
    f_prim_d[i] = ((y[i+1]-y[i])/deltax);
    s_prim_a[i] = 0.25*(y[i]);
    s_prim_d[i] = (y[i+1]-2*y[i]+cosh((x-deltax)/2))/(pow(deltax,2));
  }
  ```
Šajā daļā tiek izveidots derative.dat faila hederis un dati no virknēm tiek ievadīti .dat failā:
```c
fprintf(dataFile,"\tx\tcosh(x)\t\t         cosh\'(x/2)\t         cosh\'(x/2)\t         cosh\"(x/2)\t        cosh\"(x/2)\n");
 fprintf(dataFile,"\t\tanalytic formula\tfinite difference\tanalytic formula\tfinite difference\n");
 for(int i = 0; i<counter; i++)
  {
    fprintf(dataFile,"%.2lf\t%.2lf\t\t%.2lf\t\t\t%.2lf\t\t\t%.2lf\t\t\t%.2lf\n", xi[i], y[i], f_prim_a[i], f_prim_d[i], s_prim_a[i], s_prim_d[i]);
  }
 fclose(dataFile);
 ```
[Izdrukas fails](https://github.com/ArtursZeibots/RTR105/blob/master/LD3/derative.dat)
```
x	cosh(x)		         cosh'(x/2)	         cosh'(x/2)	         cosh"(x/2)	        cosh"(x/2)
			analytic formula	finite difference	analytic formula	finite difference
1.00	1.13		0.26			0.42			0.28			73.50
2.00	1.54		0.59			0.81			0.39			73.48
3.00	2.35		1.06			1.41			0.59			73.27
4.00	3.76		1.81			2.37			0.94			72.82
5.00	6.13		3.03			3.94			1.53			72.01
6.00	10.07		5.01			6.51			2.52			70.65
7.00	16.57		8.27			10.74			4.14			68.37
8.00	27.31		13.64			17.71			6.83			64.61
9.00	45.01		22.50			29.20			11.25			58.39
10.00	74.21		37.10			-74.21			18.55			-74.2
```
#### Secinājumi
Uzskatu, ka uzdevums tika veikts veiksmīgi, tika iegūtas atvasinājumu vērtības ar dažādām metodēm.
Šis laboratorijas darbs bija labs atkārtojums atvasinājumiem un diferenciāļiem.
Tā kā visos laboratorijas darbos iekļāvu robežu sakārtošanu, domāju, ka turpmākām vajadzībām rakstīšu funkciju, šo vērtību apgriešanai


#include <stdlib.h>
#include <stdio.h>
void PerimetroYarea ();
 int main ()
 {
     int n1,n2;
     PerimetroYarea(n1,n2);
     return 0;
 }
 void PerimetroYarea(int a,int b)
 {
     int Per=0;
     int Area=0;
     printf ("Ingrese un lado del rectangulo\n");
     scanf("%d",&a);
      printf ("Ingrese el otro lado del rectangulo\n");
     scanf("%d",&b);
     Per=2*a+2*b;
     Area=a*b;
     system ("cls");
     printf("El perimetro es %d",Per);
     printf(" el area es %d",Area);
 }


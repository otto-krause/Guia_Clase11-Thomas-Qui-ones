# Funciones
 Actividades clase 11
Thomas Quiñones 

1)
#include <stdlib.h>
#include <stdio.h>
void Numeros();
 int main ()
 {
     int num1,num2;
     Numeros(num1,num2);
     return 0;
 }
 void Numeros(int num1,int num2)
 {

     printf ("Ingrese un numero\n");
     scanf("%d",&num1);
      printf ("Ingrese otro numero\n");
     scanf("%d",&num2);
     system ("cls");
     printf ("Los numeros ingresados son \n%d  \n%d",num1,num2);

 }

2)
#include <stdlib.h>
#include <stdio.h>
void PerimetroYarea ();
 int main ()
 {
     int n1,n2;
     PerimetroYarea(a,b);
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

3)
#include <stdlib.h>
#include <stdio.h>
void Porcentaje ();
 int main ()
 {
     int n1,n2;
     Porcentaje(n1,n2);
     return 0;
 }
 void Porcentaje(int num1,int num2)
 {
     float pf=0;

 printf ("Ingresar la cantidad total de personas ");
    scanf ("%d",&num1);
    printf ("Ingresar la cantidad de mujeres ");
    scanf ("%d",&num2);
    pf=num2*100/num1;
    system ("cls");
    printf ("El porcentaje de mujeres es %7.2f",pf);
    printf(" y el porcentaje de hombres es %7.2f",100-pf);


 }

4)
#include <stdlib.h>
#include <stdio.h>
void FuerzaYsuperficie (float n1,float n2);
 int main ()
 {
     float n1,n2;
     FuerzaYsuperficie( n1, n2);
     return 0;
 }
 void FuerzaYsuperficie (float num1,float num2)
 {
     float p=0;

    printf ("Ingrese la fuerza ");
    scanf ("%f",&num1);
    printf ("Ingrese la superficie ");
    scanf ("%f",&num2);
    p=num1/num2;
    system ("cls");
    printf ("La presion es %2.f",p);
 }

 5)
#include <stdlib.h>
#include <stdio.h>
void Resistencia ();
 int main ()
 {
     int n1,n2,n3,n4,n5;
     Resistencia(n1,n2,n3,n4,n5);
     return 0;
 }
 void Resistencia(int R1,int R2,int R3,int R4,int R5,int rtotal)
 {
     printf ("Ingrese el valor de cinco resistencias \n ");
     scanf ("\n%d",&R1);
     scanf ("\n%d",&R2);
     scanf ("\n%d",&R3);
     scanf ("\n%d",&R4);
     scanf ("\n%d",&R5);
     system ("cls");
     rtotal=R1+R2+R3+R4+R5;
     printf("Las resistencias son: %d ,%d , %d ,%d y %d",r1,r2,r3,r4,r5);
     printf( "\n La resistencia total es %d",rt);

 }

 6)
#include <stdlib.h>
#include <stdio.h>
void OctavaParte (float n1,float p);
 int main ()
 {

float n1,p;
     OctavaParte(n1,p);
     return 0;
 }
 void OctavaParte(float  num , float p)
 {

   printf ("Ingrese un numero ");
   scanf ("%f",&num);
   p=num/8;
   system ("cls");
   printf ("La octava parte es %f",p);
   return 0;


 }

 7)
 #include <stdlib.h>
 #include <stdio.h>
 void Mayordedosnumeros ();
  int main ()
  {
      int n1,n2;
      Mayordedosnumeros ( n1, n2);
      return 0;
  }
  void Mayordedosnumeros (int Num,int Num2)
  {
     printf ("Ingrese un numero ");
     scanf ("%d",&Num);
      printf ("Ingrese otro numero ");
     scanf ("%d",&Num2);
     system ("cls");
     if(Num<Num2)
{
printf("El numero mayor es %d", Num2); }
else
{
if (Num2<Num)
{
printf("El numero mayor es %d", Num); }
else
{
printf("son iguales");
}
}

     return 0;
  }

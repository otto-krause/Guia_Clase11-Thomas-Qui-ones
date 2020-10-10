#include <stdlib.h>
#include <stdio.h>
void OctavaParte (float n1,float p);
 int main ()
 {

float n1,p;
     OctavaParte(n1,p);
     return 0;
 }
 void OctavaParte(float  num , float Total)
 {

   printf ("Ingrese un numero ");
   scanf ("%f",&num);
   Total=num/8;
   system ("cls");
   printf ("La octava parte es %f",Total);


 }

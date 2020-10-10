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
     printf("Las resistencias son: %d ,%d , %d ,%d y %d",R1,R2,R3,R4,R5);
     printf( "\n La resistencia total es %d",rtotal);

 }

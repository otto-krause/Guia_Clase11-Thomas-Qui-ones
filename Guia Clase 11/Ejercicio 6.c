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
  }


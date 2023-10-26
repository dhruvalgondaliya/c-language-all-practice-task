#include <stdio.h>

int main()
{
   int dg;

   printf("\n month Name");
   printf("\n Enter your chooise");
   scanf(" %d ", &dg);
   switch (dg)

   {
   case 1:
      printf("\n january %d", dg);
      break;
   case 2:
      printf("\n Fabruary %d", dg);
      break;
   case 3:
      printf("\n March %d", dg);
      break;
   case 4:
      printf("\n April %d", dg);
      break;
   case 5:
      printf("\n May %d", dg);
      break;
   case 6:
      printf("\n june %d", dg);
      break;
   case 7:
      printf("\n july %d", dg);
      break;
   case 8:
      printf("\n Auguest %d", dg);
      break;
   case 9:
      printf("\n Saptember %d", dg);
      break;
   case 10:
      printf("\n octomber %d", dg);
      break;
   case 11:
      printf("\n Navember %d", dg);
      break;
   case 12:
      printf("\n December %d", dg);
      break;

   default:
      printf("\n invalid chooise");
      break;
   }

   return 0;
}
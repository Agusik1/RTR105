#include <stdio.h>
#define N 100

int main()
{

  char string [N];
  printf ("Insert your full address: ");
  gets (string);
  printf ("Your address is (gets used): %s\n\n",string);

  char mystring [N];
  printf ("Insert your full address one more time: ");
  if ( fgets (mystring , 100 , stdin) != NULL )
   {
   printf ("Your address is (fgets used): ");
   puts (mystring);
   }

  for(int i=0;i<N;i++)
   {
   printf("%O2d. symbol %c (ASCII code - %d)\n",i+1,mystring[i],mystring[i]);
   }

  return 0;
}

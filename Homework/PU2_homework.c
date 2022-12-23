#include <stdio.h>
  int main()
   {
      unsigned char a;
      char b, c; 
        printf("Ievadiet naturālu dec skaitli: \n");
        scanf("%hhu", &a);
        printf("Te buus rezultaats: \n");
        printf("No (DEC)%hhu uz (BIN)",a);
          
  for(b = 7; b >= 0; b--)
  {
     c = a >> b;
     if(c & 1)
       printf("1");
     else
       printf("0");
  }
     printf("\n");
  return 0; 
}

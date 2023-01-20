#include<stdio.h>
#include<string.h>

void main(){
  char string[51];
  char min[2];
  char max[2];
  char i;
  int summa=0;
  char skaits=0
    
 printf("Lūdzu ievadiet simbolu (teksta) rindu: ");
 scanf("%s", &string);
  min[0] = string[0];
  min[1] = 0;
  max[0] = string[0];
  max[1] = 0;
  
 for(i=0; string[i]!='\0';i++)
 {
  summa=summa+string[i];
 printf("%d. simbola (\"%c\") ASCII vērtība ir %d\n", i+1,string[i],string[i]);
   
  

#include<stdio.h>
#include<string.h>

void main(){
  char string[100];
  char min[2];
  char max[2];
  char i;
  int summa=0;
  char skaits=0;
    
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
  if(string[i]<min[0]){min[0]=string[i];min[1]=i;}
  if(string[i]>max[0]){max[0]=string[i];max[1]=i;}
 }
  
  printf("\nJūsu ievadītā rinda ir %d simbolu gara.\n,i);
  printf("Minimālā vērtība šajā rindā ir %d. simbolam \"%c\", kura vērtība saskaņā ar ASCII ir %d\n",min[1]+1,min[0],min[0]);
  printf("Maksimālā vērtība šajā rindā ir %d. simbolam \"%c\", kura vērtība saskaņā ar ASCII ir %d\n",max[1]+1,max[0],max[0]);
  printf("Vidējā vērtība saskaņā ar ASCII šajā rindā ir %d, kurai atbilst simbols \"%c\"\n",summa/i,summa/i);
         
for(int j=0; j<i-1; j++){
  int Imin = j;
  for(int k=j+1; k<i; k++){
   if( string[k] < string[Imin])Imin = k;
  }
  int temp = string[Imin];
  string[Imin] = string[j];
  string[j] = temp;
 }
         
 if (i % 2 == 0)
         median = (string[i/2] + string[i/2 - 1])/2.0;
  else
         median = string[i/2];
         
 printf("Simbolu rindas mediāna ir \"%c\", kura vērtība saskaņā ar ASCII ir %d\n", median);
         
char n=0,m=0;
char mod[i][2];
mod[0][0]=string[0];
 
for(char l=0;l<=i;l++){
  if(string[l]==mod[m][0])n++;
  else {mod[m][1]=n;mod[m+1][0]=string[l];n=1;m++;}
 }
         
 char biezums=0;
 for(n=0;n<m;n++){
  if(biezums<mod[n][1])biezums=mod[n][1];
 }
 for(n=0;n<m;n++){
  if(biezums==mod[n][1])
    
printf("Simbolu rindas moda ir simbols \"%c\", kura vērtība saskaņā ar ASCII ir %d un tas atkārtojas %d reižu.\n",mod[n][0],mod[n][0],biezums);
}
         
 for(n=0;n<i;n++){
  for(m=0;m<2;m++){
   if(m==0)printf("%c\t",string[n]);
   if(m==1)printf("%d\n",string[n]);
  }
 }
}

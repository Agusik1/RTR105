#include<stdio.h>

 int  main(){

    char str1, str2, str3;//Burtu argumenti
    int a; //Secība


    printf("Ja vēlies AUGOŠĀ secībā ievadi(1) \nJa vēlies DILSTOŠĀ secībā ievadi(2) \nPēc tam ievadi trīs burtus!\n");
    scanf("%d %c %c %c",&a , &str1 ,&str2 ,&str3);

  if(a == 1){

    if (str1 <= str2 && str1 <= str3){   //Augoša
       if(str2 <= str3)
            printf("%c, %c, %c \n", str1, str2, str3);
        else
            printf("%c, %c, %c \n", str1, str3, str2);
    }
    else{
        if(str2 <= str1 && str2 <= str3){
            if(str1 <= str3)
                printf("%c, %c, %c \n", str2, str1, str3);
            else
                printf("%c, %c, %c \n", str2, str3, str1);
        }
        else{
            if(str2 <= str1)
                printf("%c, %c, %c \n", str3, str2, str1);
            else
                printf("%c, %c, %c \n", str3, str1, str2);
            }
        }
    }

  if(a == 2){

    if (str1 >= str2 && str1 >= str3){   //Dilstoša
       if(str2 >= str3)
            printf("%c, %c, %c \n", str1, str2, str3);
        else
            printf("%c, %c, %c \n", str1, str3, str2);
    }
    else{
        if(str2 >= str1 && str2 >= str3){
            if(str1 >= str3)
                printf("%c, %c, %c \n", str2, str1, str3);
            else
                printf("%c, %c, %c \n", str2, str3, str1);
        }
        else{
            if(str2 >= str1)
                printf("%c, %c, %c \n", str3, str2, str1);
            else
                printf("%c, %c, %c \n", str3, str1, str2);
            }
        }
    }

   return 0;
 }

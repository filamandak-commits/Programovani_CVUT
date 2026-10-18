#include <stdio.h>

int main(void)
{
char c[] = "ahoj";
int i = 1000,j;
float x,y = 3.1415;
 
printf("%s\n", c); //%c vypise psimeno
printf("%i\n", c); //%i vypise cislo stejny jako %d
 
printf("%d\n", i);//%d vypise cislo
printf("%+5d\n", i); //%+5d vypise cislo se znaminkem
printf("%x\n", i); //%x vypise cislo v hexadecimálním tvaru
 
printf("%f\n", y); //%f vypise cislo s desetinnou carkou
printf("%10.3f\n", y); //%10.3f vypise cislo s 3 desetinnymi misty a sirkou 10
printf("\t%-g\n", y); //%-g vypise cislo v nejkratsim tvaru

printf("%6d,%4d", 86, 1040);//%6d,%4d vypise cisla s sirou 6 a 4
printf("\n");//\n vypise novy radek
printf("%12.5e", 3.14159265);//%12.5e vypise cislo v exponencialnim tvaru s 5 desetinnymi misty a sirkou 12
printf("\n");//\r vypise na zacatek radku
printf("%.4f\n", 85.167);//%.4f vypise cislo s 4 desetinnymi misty
}
#include <stdio.h>

int main(void){
    int a;
    int b;
    int c;
    int diskriminant;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    diskriminant = b*b-4*a*c;

    if ((diskriminant <-999)||(diskriminant > 999)){
        printf("Diskriminant mimo povoleny interval!\n");
        return 0;
    }
    if (diskriminant == 0){
        printf("+-----+-----+-----+-----+\n");
        printf("|%4d |%4d |%4d |%4d |\n", a, b, c, diskriminant);
        printf("+-----+-----+-----+-----+\n");
        printf("|           Jeden koren |\n");
        printf("+-----------------------+\n");
        return 0;

    }
    else if(diskriminant > 0){
        printf("+-----+-----+-----+-----+\n");
        printf("|%4d |%4d |%4d |%4d |\n", a, b, c, diskriminant);
        printf("+-----+-----+-----+-----+\n");
        printf("|     Dva realne koreny |\n");
        printf("+-----------------------+\n");
        return 0;
    }
    else if (diskriminant <0){
        printf("+-----+-----+-----+-----+\n");
        printf("|%4d |%4d |%4d |%4d |\n", a, b, c, diskriminant);
        printf("+-----+-----+-----+-----+\n");
        printf("| Dva imaginarni koreny |\n");
        printf("+-----------------------+\n");
        return 0;
    }


}
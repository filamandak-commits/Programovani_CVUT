#include <stdio.h>

int main(void){
    int vstup1;
    int vstup2;
    int vstup3;

    int scan1 = scanf("%d", &vstup1);
    int scan2 = -1;
    int scan3 = -1;

    if (scan1 == 1) {
        scan2 = scanf("%d", &vstup2);
    }
    if (scan2 == 1) {
        scan3 = scanf("%d", &vstup3);
    }

    int pocet = 0;

    if(scan1 == 1){
        pocet = 1;
    }
    if(scan2 == 1){
        pocet = 2;
    }
    if(scan3 == 1){
        pocet = 3;
    }

    if((scan1 != 1) || (scan2 == 0) || (scan3 == 0)){
        fprintf(stderr, "Error: Chybny vstup!\n");
        return 100;
    }

    if((vstup1 < 3) || (vstup1 > 69)){
        fprintf(stderr, "Error: Vstup mimo interval!\n");
        return 101;
    }
    if(pocet >= 2 && ((vstup2 < 3) || (vstup2 > 69))){
        fprintf(stderr, "Error: Vstup mimo interval!\n");
        return 101;
    }
    if(pocet == 3 && ((vstup3 < 3) || (vstup3 > 69))){
        fprintf(stderr, "Error: Vstup mimo interval!\n");
        return 101;
    }


    if(pocet == 1){
        for(int radek = 1; radek <= vstup1; radek++){
            for(int sloupec = 1; sloupec <= vstup1; sloupec++){
                if ((sloupec == 1)||(sloupec == vstup1)||(radek == 1)||(radek == vstup1)){
                    printf("X");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    if(pocet == 2){
        int sirka = vstup1;
        int vyska = vstup2;

        if((sirka%2)!=0){
            fprintf(stderr, "Error: Sirka neni liche cislo!\n");
            return 102;
        }
        for(;;){
            for(;;){

            }
            printf("\n");
        }

        if(vyska==sirka){
            for(int i = 1; i < vyska);
        }
    }
    return 0;
}
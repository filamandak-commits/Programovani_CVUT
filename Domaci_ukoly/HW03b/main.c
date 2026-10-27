#include <stdio.h>

int main(void){
    int a;
    int predchozi = -1;
    int posloupnost = 0;

    while (scanf("%d", &a)==1){
        if (predchozi == a){
            posloupnost++;
        }
        if ((predchozi != a)&&(posloupnost>0)){
            posloupnost++;
            printf("%dx %d\n", posloupnost, predchozi);
            posloupnost = 0;
        }
        if (a>100||a<0){
            printf("Error: Vstup je mimo interval!\n");
            return 100;
        }

        predchozi = a;
    }
    if(posloupnost>0){
        posloupnost++;
        printf("%dx %d\n", posloupnost, predchozi);
    }
    return 0;
}
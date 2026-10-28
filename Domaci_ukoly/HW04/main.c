#include <stdio.h>

int main(void){
    char symbol;
    char predchozi_symbol = 'x';
    int posloupnost = 1;
    int pocet_vstupnich = 0;
    int pocet_zakodovanych = 0;

    while(scanf("%c", &symbol)==1){
        if (symbol == '\n' || symbol == '\r' || symbol == '^') continue;
        pocet_vstupnich++;
        if(predchozi_symbol == symbol){
            posloupnost++;
        }
        if(predchozi_symbol != symbol){
            if((posloupnost == 1)&&(predchozi_symbol!='x')){
                pocet_zakodovanych = pocet_zakodovanych + printf("%c", predchozi_symbol);
            }
            if(posloupnost == 2){
                pocet_zakodovanych = pocet_zakodovanych + printf("%c%c", predchozi_symbol, predchozi_symbol);
            }
            if(posloupnost>2){
                pocet_zakodovanych = pocet_zakodovanych + printf("%c%d", predchozi_symbol, posloupnost);
            }
            posloupnost = 1;
        }
        if((symbol < 'A')||(symbol>'Z')){
            fprintf(stderr, "Error: Neplatny symbol!\n");
            return 100;
        }
        
        predchozi_symbol = symbol;
    }
    if((posloupnost == 1)&&(predchozi_symbol!='x')){
                pocet_zakodovanych = pocet_zakodovanych + printf("%c", predchozi_symbol);
            }
            if(posloupnost == 2){
                pocet_zakodovanych = pocet_zakodovanych + printf("%c%c", predchozi_symbol, predchozi_symbol);
            }
            if(posloupnost>2){
                pocet_zakodovanych = pocet_zakodovanych + printf("%c%d", predchozi_symbol, posloupnost);
            }
            posloupnost = 1;


        
    printf("\n");
    fprintf(stderr, "Pocet vstupnich symbolu: %d\n", pocet_vstupnich);
    fprintf(stderr, "Pocet zakodovanych symbolu: %d\n", pocet_zakodovanych);
    fprintf(stderr, "Kompresni pomer: %.2lf\n", (double)pocet_zakodovanych/pocet_vstupnich);
    return 0;

}
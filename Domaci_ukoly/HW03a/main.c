#include <stdio.h>

int main(void)
{
    int a;
    int nacteno = 0;
    int kladne = 0;
    int zaporne = 0;
    double procento_kladnych = 0;
    double procento_zapornych = 0;
    int sude = 0;
    int liche = 0;
    int soucet = 0;
    int max = -20000;
    int min = 20000;

    while(scanf("%d", &a) == 1)
    {
        if(a<-10000||a>10000){
            printf("\n");
            printf("Error: Vstup je mimo interval!\n");
            return 100;
        }
        nacteno++;
        if(nacteno == 1){
            printf("%d", a);
        }
        if(nacteno != 1){
            printf(", %d", a);
        }
        if(a>0){
            kladne++;
        }
        if(a<0){
            zaporne++;
        }
        if(a%2==0){
            sude++;
        }
        if(a%2!=0){
            liche++;
        }
        soucet = soucet + a;
        if (max<a){
            max = a;
        }
        if (min>a){
            min = a;
        }

    }
    procento_kladnych = (double)kladne*100/nacteno;
    procento_zapornych = (double)zaporne*100/nacteno;
    printf("\n");
    printf("Pocet cisel: %d\n", nacteno);
    printf("Pocet kladnych: %d\n", kladne);
    printf("Pocet zapornych: %d\n", zaporne);
    printf("Procento kladnych: %.2lf\n", procento_kladnych);
    printf("Procento zapornych: %.2lf\n", procento_zapornych);
    printf("Pocet sudych: %d\n", sude);
    printf("Pocet lichych: %d\n", liche);
    printf("Procento sudych: %.2lf\n", (double)sude*100/nacteno);
    printf("Procento lichych: %.2lf\n", (double)liche*100/nacteno);
    printf("Prumer: %.2lf\n", (double)soucet/nacteno);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
#include <stdio.h>

int main(){
    int Z;
    int idade;
    int anoNasc_Millennial;

    scanf("%d", &Z);

    if(Z >= 2010 && Z <=2020){
        idade = 2025 - Z;
        anoNasc_Millennial = 2025 - (2 * idade);
        printf("%d", anoNasc_Millennial);
    }

return 0;
}

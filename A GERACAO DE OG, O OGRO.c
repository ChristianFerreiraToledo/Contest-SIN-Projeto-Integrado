#include <stdio.h>

int main()
{
    int N;
    int F;
    int soma = 0;

    scanf("%d", &N);

    if(N >= 1 && N <= 1000){
        for(int i = 0; i < N; i++){
        scanf("%d", &F);

        if(F >= 0 && F <= 1000){
            soma = soma + F;
        }
    }
    printf("%d", soma);
    }

    return 0;
}

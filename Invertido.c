#include <stdio.h>

int main(void){
    int numeros[5];
    int i, aux;
    for(i=0;i<5;i++){
        printf("Ingrese el elemento %d: ",i);
        scanf("%d",&numeros[i]);
    }
    for(i=4;i>=0;i--){
        printf("%d\n",numeros[i]);
    }

    for (i = 0; i <= 2; i++) {
        aux = numeros[i];
        numeros[i] = numeros[4-i];
        numeros[4-i] = aux;
    }

    printf("Nueva cadena invertida:\n");
    for(i=0;i<=4;i++){
       printf("%d\n",numeros[i]);
    }

    return 0;
}
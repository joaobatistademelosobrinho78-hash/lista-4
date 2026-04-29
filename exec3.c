#include <stdio.h>
    int main(){
    int i, numero, soma = 0;
    for(i= 1; i<=5; i++){
        
        printf("Digite um numero positivo");
        scanf("%d", &numero); 
        if(numero > 0){
            soma=soma+numero;
        }
    }
    printf("A soma foi de %d", soma);
 return 0;
}

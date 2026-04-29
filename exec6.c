#include <stdio.h>
int main(){
    int senha;
    printf("informe sua senha:\n");
    scanf("%d", &senha);
    while(senha != 1234){
        printf("informe a senha novamente;\n");
        scanf("%d", &senha);
    }
    printf("Login completo");
    
    return 0;
}

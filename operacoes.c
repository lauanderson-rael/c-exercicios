#include <stdio.h>
int main(){
    float n1,n2;
    printf("Digite um valor: ");
    scanf("%f", &n1);

    printf("Digite outro valor: ");
    scanf("%f", &n2);
    
    int op;
    printf("Qual operacao deseja realizar? \n");
    printf("1 - Soma\n");
    printf("2 - multiplicacao\n");
    scanf("%d", &op);

    if(op == 1){
        printf("resultado = %2f", (n1+n2));
    }
    if(op == 2){
        printf("resultado = %2f", (n1*n2));
    }
    else{
        printf("Operacao invalida");
    };

    return 0;
}
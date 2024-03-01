#include <stdio.h>
int main(){

    printf("====== VAMOS CALCULAR ======\n");
    
    float n1,n2;
    printf("Digite um valor: ");
    scanf("%f", &n1);

    printf("Digite outro valor: ");
    scanf("%f", &n2);
    
    int op;
    printf("\nQual operacao deseja realizar? \n");
    printf("1 - Soma\n");
    printf("2 - Multiplicacao\n");
    printf("3 - Subtracao\n");
    printf("4 - Divisao\n");
    scanf("%d", &op);

    if(op == 1){
        printf("resultado = %2f", (n1+n2));
    }
    else if(op == 2){
        printf("resultado = %2f", (n1*n2));
    }
    else if(op == 3){
        printf("resultado = %2f", (n1-n2));
    }
    else if(op == 4){
        printf("resultado = %2f", (n1/n2));
    }
    else {
        printf("Operacao invalida");
    };

    return 0;
}
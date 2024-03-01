#include <stdio.h>
int main(){
    int numero, n3, n2, n1;
    printf("Digite um valor inteiro com 3 algarismos(ex: 123): "); // 123
    scanf("%i", &numero);

    n3 = numero % 10;
    n2 = (numero / 10) % 10;
    n1 = (numero/100);
    
    printf("Valor invertido: %d %d %d", n3, n2, n1);

    return 0;
}
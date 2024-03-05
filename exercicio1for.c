// receba dois numeros e mostre a media dos positivos e negativos entre eles. 
// se o intervalo entre eles for no minimo 10
#include <stdio.h>
void main(){

    float n1, n2, dif, somaPos, somaNeg;
    int qtdPos, qtdNeg;
    somaPos = 0; somaNeg = 0.0;
    qtdPos = 0;  qtdNeg = 0;

    printf("Digite um numero: ");
    scanf("%f", &n1);
    
    printf("Digite outro numero: ");
    scanf("%f", &n2);

    if (n1>n2){
        dif = n1 - n2;
        if (dif >= 10){
            n2+=1;
            printf("\nNumeros do intervalo: \n");
            for (n2; n2 < n1; n2++ ){
                printf("%.0f", n2);
                if (n2 > 0){
                    somaPos+=n2;
                    qtdPos+=1;
                }
                else if(n2 < 0){
                    somaNeg+=n2;
                    qtdNeg+=1;

                }
            }

        } else { 
            printf("Erro, o intervalo minimo entre os valores deve ser 10!\n");
            }
            exit(0);
    }
    
    else if (n1 < n2){
        dif = n2 - n1;
        if (dif >= 10){
            n1+=1;
            printf("\nNumeros do intervalo: \n");
            for (n1; n1 < n2; n1++ ){
                printf("%1.f ", n1);
                if (n1>0){
                    somaPos+=n1;
                    qtdPos+=1;
                }
                else if(n1 < 0){
                    somaNeg+=n1;
                    qtdNeg+=1;

                }
            }

        } else { 
            printf("Erro, o intervalo minimo entre os valores deve ser 10!\n");
            }
            exit(0);
            
    }
    
    float mediaP = somaPos/qtdPos;
    float mediaN = somaNeg/qtdNeg;
    printf("\n\nMedia dos positivos: %.2f\n", mediaP);
    if (qtdNeg != 0){
        printf("Media dos negativos: %.2f\n", mediaN);
    }else{
        printf("Media dos negativos: 0.0 ");
    }

}
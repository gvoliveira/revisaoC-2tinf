#include <stdio.h>
//Uma possivel resposta para o Exerc�cio 1 Slide 26 de revis�o de estruturas de repeti��es
int main(){

    int i, numero;

    printf("Digite um valor: ");
    scanf("%d", &numero);
    if(numero > 0){
        for(i = 0; i <= numero; i++){
           if(i%3 == 0){
              printf("%d, ", i);
           }
        }
    }

    return 0;
}

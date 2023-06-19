#include <stdio.h>
//Uma possivel resposta para o Exercício 1 Slide 26 de revisão de estruturas de repetições
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

#include <stdio.h>
/*Faça um programa que leia 10 valores do usuário e armazene em um vetor.
Ao final, mostre na tela: a média desses valores, o maior valor digitado, o
menor valor digitado.*/
int main(){
    float valores[10], soma=0, maior, menor; //varia indices de 0 ate 9
    int i;
    for(i=0; i<10; i++){
        printf("Digite um valor: ");
        scanf("%f", &valores[i]);
    }
    menor = valores[0];
    maior = valores[0];
    for(i=0; i<10; i++){
        soma = soma + valores[i]; //a cada iteracao, somo o valor atual com o total anterior
        if(valores[i] > maior){
            maior = valores[i]; //atribuindo o valor atual como sendo o maior de todos*
        }else if(valores[i] < menor) {
            menor = valores[i];
        }
    }
    soma = soma/10; //sobrescrevo a soma com a media
    printf("Media = %.2f\nMaior: %.2f\nMenor %.2f", soma, maior, menor);
    return 0;
}

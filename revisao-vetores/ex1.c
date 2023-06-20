#include <stdio.h>
/*Faça um programa que leia um vetor com o valor das vendas
realizadas por um vendedor nos últimos 6 meses. Posteriormente
calcule e armazene em um segundo vetor a comissão recebida
por esse vendedor em cada mês (10% das vendas). Imprima a comissão
de cada mês e o valor total recebido pelo vendedor.*/
int main(){
    float vendas[6], comissao[6], total=0; //indices de 0 ate 5
    int i;
    for(i = 0; i < 6; i++){
        printf("\nInsira o valor de vendas do mes %d: ", i+1);
        scanf("%f", &vendas[i]);
    }
    for(i = 0; i < 6; i++){
        comissao[i] = vendas[i] * 0.1;
        total = total + comissao[i];
    }

    for(i = 0; i < 6; i++){
        printf("\nMes %d: %.2f",i+1, comissao[i]);
    }
    printf("\nO total recebido em 6 meses foi %.2f", total);



    return 0;
}

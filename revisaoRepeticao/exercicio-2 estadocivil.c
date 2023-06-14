#include <stdio.h>
int main (){
    int estadocivil, idade, qtdTotalSolteiros=0, qtdSolteiro30=0;
    int qtdTotalDivorciados=0, qtdDivorciados50=0;
    int pessoaMaisVelha=0, estadoCivilMaisVelha;

   do{
        printf("Digite  o estado civil (1 solteiro 2 casado 3 divorciado 4 outro 5 sair do programa");
        scanf("%d", &estadocivil);
        if(estadocivil != 5){
            printf("Digite a idade");
            scanf("%d", &idade);
        }

        if(estadocivil == 1){
            qtdTotalSolteiros++;
            if(idade > 30){
                qtdSolteiro30++;
            }
        }else if(estadocivil == 3){
            qtdTotalDivorciados++;
            if(idade < 50){
                qtdDivorciados50++;
            }
        }
        if(idade > pessoaMaisVelha){
            pessoaMaisVelha = idade;
            estadoCivilMaisVelha = estadocivil;
        }

   }while(estadocivil != 5);

   printf("\nqtdTotalSolteiros %d", qtdTotalSolteiros);
   printf("\nqtdSolteiro30 %d", qtdSolteiro30);
   printf("\nqtdTotalDivorciados %d", qtdTotalDivorciados);
   printf("\nqtdDivorciados50 %d", qtdDivorciados50);
   printf("\n A pessoa mais velha tem %d anos e e %d", pessoaMaisVelha, estadoCivilMaisVelha);

return 0;
}

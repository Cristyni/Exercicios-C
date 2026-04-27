/* 1) Crie um programa que forneça um menu com duas
opções. Caso o usuário digite 1, o programa solicitará um
número e verificará se o valor é par ou impar. Caso o
usuário digite 2, o programa solicitará uma idade e
verificará se pessoa é maior ou menor de idade.
Veja o exemplo de menu abaixo:

Menu de programa:
1 – Verifica par/impar
2 – Verifica maior/menor de idade
Digite sua opção:
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){
   
    int opcao;
    int idade;
    int number;

    printf("Menu de programa:\n");
    printf(" 1 -- Verificar par/impar \n 2 -- Verifica maior/menor de idade\n");
        printf("Digite sua opção:");
        scanf("%i", &opcao);
        switch (opcao)
        {
        case 1:
         printf("Você escolheu a opção >Verificar par/impar<\n");
         printf("Digite um número inteiro para a verificação: ");
        
         if(scanf("%i", &number) != 1){
            printf("Valor invalido!");
         }else{
            if (number % 2 == 0){
            printf("O número é par!\n");
         }else{
            printf("O número é impar!\n");
         }
         }
          
        break;
          
        case 2:
        printf("Você escolheu a opção >Verifica maior/menor de idade<\n");
         printf("Digite a sua idade para a verificação: ");

         if(scanf("%i", &idade) != 1){
            printf("Valor invalido!");
         }else{
            if (idade >=18){
            printf("Você é maior de idade!\n");
         }else{
            printf("Você é menor de idade!\n");
         }
        }

        break;
          
         default:
         printf("Valor invalido!");
           
         break;
        }
        return 0;
 }
 }//chave else secundario(chave fechamento da main)

/* Crie uma calculadora usando a instrução switch, que pergunte qual das operações básicas quer fazer
(+, -, * e /), em seguida peça os dois números e mostre o resultado da operação matemática entre eles.*/

 // Inclusão das bibliotecas necessárias
 #include <stdio.h>
 #include <stdlib.h>

 // Função principal do programa
 int main(){

    //variáveis declaradas
    float n1;
    float n2;
    char opcao;
    float adicao;
    float subtracao;
    float multiplicacao;
    float divisao;

    //mostrando as opções para calculo
    printf("Olá, eu sou a sua calculadora inteligente!\n");
    printf("Quais das operações abaixo você gostaria de fazer?\n");
    printf("Digite (A) para Adição!\nA\
        Digite (S) para Subtração!\n\
        Digite (M) para multiplicação!\n\
        Digite (D) para divisão!\n");

        //reservando a escolha do usuário na variável opcao
        printf("Digite aqui sua opção escolhida:");
        scanf("%c", &opcao);

        //usando o switch para fazer operações dependendo da escolha do usuário
        switch (opcao)
        {
            //caso a opção digitada seja A ou a, os comandos abaixo serão executados
        case 'A':
        case 'a':

        //mostrando ao usuário sua escolha
            printf("Você escolheu Adição!\n");

            //pedindo para o usuário digitar o valor da primeira parcela
            printf("Agora, digite o valor da 1° parcela:");

         /*verificando se n1 não é lido como 1 valor (um número ja que a variavel 
        é um float não um char)*/
        if(scanf("%f", &n1) != 1){

            //caso o valor digitado não for lido como 1 valor, a mensagem abaixo aparecerá
            printf("Valor invalido!");

        }else{
            /*caso contrário o código prossiguirá e pedirá ao usuário o valor da 
            próxima parcela*/
        printf("Agora, digite o valor da 2° parcela:");

        /*verificando se n2 não é lido como 1 valor (um número ja que a variavel 
        é um float não um char)*/
        if(scanf("%f", &n2) !=1){
            //caso o valor digitado não for lido como 1 valor, a mensagem abaixo aparecerá
            printf("Valor invalido!");

        }else{
            /*caso contrário vamos somar os valores da variável n1 e n2 e guardar o resultado 
            na variável adicao*/
        adicao = n1 + n2;

        // e mostraremos a seguinte mensagem pro usuário mostrando o resultado da operação
        printf("O resultado da operação é: %.2f\n", adicao);

        }//chave do else secundário
    }//chave do else primário
        break;/*quebra a estrutura de controle para evitar que o programa execute 
        as próximas opções*/
        
        //caso a opção digitada seja S ou s, os comandos abaixo serão executados
        case 'S':
        case 's':

        //mostrando ao usuário sua escolha
        printf("Você escolheu Subtração!\n");

        //pedindo para o usuário digitar o valor do minuendo
        printf("Agora, digite o valor do minuendo:");

        /*verificando se n1 não é lido como 1 valor (um número ja que a variavel 
        é um float não um char)*/
        if(scanf("%f", &n1) !=1){

         //caso o valor digitado não for lido como 1 valor, a mensagem abaixo aparecerá   
        printf("Valor invalido!");

        }else{
             /*caso contrário o código prossiguirá e pedirá ao usuário o valor do subtraendo*/
        printf("Agora, digite o valor do subtraendo:");

        /*verificando se n2 não é lido como 1 valor (um número ja que a variavel 
        é um float não um char)*/
        if(scanf("%f", &n2) !=1){
        //caso n2 não seja lido como 1 valor, aparecerá a mensagem abaixo
            printf("Valor invalido!");

        }else{
         /*caso contrário vamos subtrair os valores da variável n1 e n2 e guardar o resultado 
            na variável subtracao*/
        subtracao = n1 - n2;

        // e mostraremos a seguinte mensagem pro usuário mostrando o resultado da operação
        printf("O resultado da operação é: %.2f\n", subtracao);
        }//chave do else secundário
    }//chave else primário
        break;/*quebra a estrutura de controle para evitar que o programa execute 
        as próximas opções*/

        //caso a opção digitada seja M ou m, os comandos abaixo serão executados
        case 'M':
        case 'm':

        //mostrando ao usuário sua escolha
         printf("Você escolheu  Multiplicação!\n");

         //pedindo para o usuário digitar o valor do multiplicando
        printf("Agora, digite o valor do multiplicando:");

        /*verificando se n1 não é lido como 1 valor (um número ja que a variavel 
        é um float não um char)*/
        if(scanf("%f", &n1) !=1){

            //caso n1 não seja lido como 1 valor, aparecerá a mensagem abaixo
            printf("Valor invalido!");

        }else{
         /*caso contrário o código prossiguirá e pedirá ao usuário o
        valor do multiplicador*/
        printf("Agora, digite o valor do multiplicador:");

        /*verificando se n2 não é lido como 1 valor (um número ja que a variavel 
        é um float não um char)*/
        if(scanf("%f", &n2)!=1){

            //caso n2 não seja lido como 1 valor, aparecerá a mensagem abaixo
            printf("Valor invalido!");

        }else{
        /*caso contrário vamos multiplicar os valores da variável n1 e n2 e guardar o resultado 
            na variável multiplicacao*/    
        multiplicacao = n1 * n2;

          // e mostraremos a seguinte mensagem pro usuário mostrando o resultado da operação
        printf("O resultado da operação é: %.2f\n", multiplicacao);
        }//chave else secundario
    }//chave else primario


        break;/*quebra a estrutura de controle para evitar que o programa execute 
        as próximas opções*/

        //caso a opção digitada seja D ou d, os comandos abaixo serão executados
        case 'D':
        case 'd':

        //mostrando ao usuário sua escolha
         printf("Você escolheu Divisão!\n");

         //pedindo para o usuário digitar o valor do dividendo
         printf("Agora, digite o valor do dividendo:");

        /*verificando se n1 não é lido como 1 valor (um número ja que a variavel 
        é um float não um char)*/ 
        if(scanf("%f", &n1) !=1){

            //caso n1 não seja lido como 1 valor, aparecerá a mensagem abaixo
            printf("Valor invalido!");

        }else{

        /*caso contrário o código prossiguirá e pedirá ao usuário o
        valor do divisor*/    
        printf("Agora, digite o valor do divisor:");

        /*verificando se n2 não é lido como 1 valor (um número ja que a variavel 
        é um float não um char)*/ 
        if (scanf("%f", &n2) != 1){

             //caso n2 não seja lido como 1 valor, aparecerá a mensagem abaixo
            printf("Valor invalido!");
        }else{

         /*Caso n2 seja lido como 1 valor, o código prosseguirá e agora verificará
         se n2 é igual a zero*/   
        if(n2 == 0){

            //caso n2 for igual a 0, a mensagem abaixo será mostrada
            printf("Erro! Divisor = 0\n");

        }else{
            /*caso contrário, o código irá dividir o valor de n1 por n2 e guardará o
            resultado na variável divisao*/
            divisao = n1 / n2;

            /*após o calculo, será mostrado a mensagem abaixo revelando o valor da variavel 
        'divisao' para o usuário*/
            printf("O resultado da operação é: %.2f", divisao);

            break;/*quebra a estrutura de controle para evitar que o programa execute 
        as próximas opções*/

         //Caso a opção digitada na hora da escolha das opções do menu seja diferente de 1 ou 2, o programa exibirá a mensagem de valor inválido
            default:
            printf("Opção inválida! Por favor, escolha uma opção válida.");
        }//chave de fechamento else terciario
        }//chave fechamento else secundário
        }//chave fechamento else primario
        }//chave fechamento switch
    }//fim do programa (chave fechamento da main)

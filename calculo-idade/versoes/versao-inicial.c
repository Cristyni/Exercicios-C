/* 2) Faça um programa que calcule e mostre a idade de uma
pessoa a partir do ano em que a pessoa nasceu e do ano atual.
Os valores serão digitados pelo usuário.
Obs.:Considere que ela já fez aniversário neste ano. */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int ano_nascimento;
    printf("Digite aqui o ano em que você nasceu:");
    scanf("%i", &ano_nascimento);
    int calculo = 2026 - ano_nascimento;
    printf("Você tem: %i anos", calculo);
    return 0;
}
